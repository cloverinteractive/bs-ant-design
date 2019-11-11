[@bs.module "antd"] [@react.component]
external make:
  (
    ~itemRender: ('r, 'rp, 'rs, 'ps) => React.element=?,
    ~params: 'rp=?,
    ~routes: array('r)=?,
    ~separator: string=?,
    ~children: 'c
  ) =>
  React.element =
  "Breadcrumb";
