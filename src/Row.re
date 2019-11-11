[@bs.deriving jsConverter]
type alignment = [ | `top | `middle | `bottom];

[@bs.deriving jsConverter]
type justify = [
  | `start
  | `center
  | [@bs.as "end"] `_end
  | [@bs.as "space-around"] `spaceAround
  | [@bs.as "space-between"] `spaceBetween
];

[@bs.deriving jsConverter]
type rowType = [ | `flex];

module External = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~align: string=?,
      ~gutter: GutterProp.js=?,
      ~justify: string=?,
      ~_type: string=?,
      ~children: 'c
    ) =>
    React.element =
    "Row";
};

[@react.component]
let make = (~align=?, ~gutter=?, ~justify=?, ~_type=?, ~children=?) =>
  <External
    align=?{Belt.Option.map(align, alignmentToJs)}
    gutter=?{Belt.Option.map(gutter, GutterProp.toJs)}
    justify=?{Belt.Option.map(justify, justifyToJs)}
    _type=?{Belt.Option.map(_type, rowTypeToJs)}>
    children
  </External>;
