[@bs.module "antd"] [@react.component]
external make:
  (
    ~offsetBottom: int=?,
    ~offstTop: int=?,
    ~target: unit => 'e=?,
    ~onChange: 'a => unit=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: 'c
  ) =>
  React.element =
  "Afix";
