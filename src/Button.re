[@bs.deriving jsConverter]
type buttonHtmlType = [ | `submit | `reset | `button];

[@bs.deriving jsConverter]
type buttonShape = [ | `circle | `round];

[@bs.deriving jsConverter]
type buttonType = [ | `primary | `ghost | `dashed | `danger | `link];

module External = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~ghost: bool=?,
      ~href: string=?,
      ~htmlType: string=?,
      ~icon: string=?,
      ~loading: LoadingProp.js=?,
      ~shape: string=?,
      ~target: string=?,
      ~_type: string=?,
      ~onClick: 'e => unit=?,
      ~block: bool=?,
      ~children: 'c
    ) =>
    React.element =
    "Button";
};

[@react.component]
let make =
    (
      ~disabled=?,
      ~ghost=?,
      ~href=?,
      ~htmlType=?,
      ~icon=?,
      ~loading=?,
      ~shape=?,
      ~target=?,
      ~_type=?,
      ~onClick=?,
      ~block=?,
      ~children,
    ) =>
  <External
    ?disabled
    ?ghost
    ?href
    htmlType=?{Belt.Option.map(htmlType, buttonHtmlTypeToJs)}
    ?icon
    loading=?{Belt.Option.map(loading, LoadingProp.toJs)}
    shape=?{Belt.Option.map(shape, buttonShapeToJs)}
    ?target
    _type=?{Belt.Option.map(_type, buttonTypeToJs)}
    ?onClick
    ?block>
    children
  </External>;
