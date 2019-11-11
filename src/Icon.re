[@bs.deriving jsConverter]
type iconTheme = [ | `filled | `outlined | `twoTone];

module External  = {
[@bs.module "antd"] [@react.component]
external make:
  (
    ~_type: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~theme: string=?,
    ~spin: bool=?,
    ~rotate: float=?,
    ~component: React.element=?,
    ~twoToneColor: string=?,
  ) =>
  React.element =
  "Icon";
};

[@react.component]
let make = (
  ~_type=?,
  ~style=?,
  ~theme=?,
  ~spin=?,
  ~rotate=?,
  ~component=?,
  ~twoToneColor=?
  ) =>
  <External
    ?_type
    ?style
    theme=?{Belt.Option.map(theme, iconThemeToJs)}
    ?spin
    ?rotate
    ?component
    ?twoToneColor />;
