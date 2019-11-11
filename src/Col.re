module External = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~offset: int=?,
      ~order: int=?,
      ~pull: int=?,
      ~push: int=?,
      ~span: int=?,
      ~xs: ColProp.js=?,
      ~sm: ColProp.js=?,
      ~md: ColProp.js=?,
      ~lg: ColProp.js=?,
      ~xl: ColProp.js=?,
      ~xxl: ColProp.js=?,
      ~children: 'c
    ) =>
    React.element =
    "Col";
};

[@react.component]
let make =
    (
      ~offset=?,
      ~order=?,
      ~pull=?,
      ~push=?,
      ~span=?,
      ~xs=?,
      ~sm=?,
      ~md=?,
      ~lg=?,
      ~xl=?,
      ~xxl=?,
      ~children,
    ) =>
  <External
    ?offset
    ?order
    ?pull
    ?push
    ?span
    xs=?{Belt.Option.map(xs, ColProp.toJs)}
    sm=?{Belt.Option.map(sm, ColProp.toJs)}
    md=?{Belt.Option.map(md, ColProp.toJs)}
    lg=?{Belt.Option.map(lg, ColProp.toJs)}
    xl=?{Belt.Option.map(xl, ColProp.toJs)}
    xxl=?{Belt.Option.map(xxl, ColProp.toJs)}>
    children
  </External>;
