[@bs.deriving jsConverter]
type typoType = [ | `secondary | `warning | `danger];

module Text = {
  module External = {
    [@bs.module "antd/lib/typography"] [@react.component]
    external make:
      (
        ~code: bool=?,
        ~copyable: CopyableProp.js=?,
        ~delete: bool=?,
        ~editable: EditableProp.js=?,
        ~ellipsis: EllipsisProp.js=?,
        ~mark: bool=?,
        ~underline: bool=?,
        ~onChange: 'e => unit=?,
        ~strong: bool=?,
        ~_type: string=?,
        ~children: 'c
      ) =>
      React.element =
      "Text";
  };

  [@react.component]
  let make =
      (
        ~code=?,
        ~copyable=?,
        ~delete=?,
        ~editable=?,
        ~ellipsis=?,
        ~mark=?,
        ~underline=?,
        ~onChange=?,
        ~strong=?,
        ~_type=?,
        ~children,
      ) =>
    <External
      ?code
      copyable=?{Belt.Option.map(copyable, CopyableProp.toJs)}
      ?delete
      editable=?{Belt.Option.map(editable, EditableProp.toJs)}
      ellipsis=?{Belt.Option.map(ellipsis, EllipsisProp.toJs)}
      ?mark
      ?underline
      ?onChange
      ?strong
      _type=?{Belt.Option.map(_type, typoTypeToJs)}>
      children
    </External>;
};

module Title = {
  type heading =
    | H(int);

  let headingToJS: heading => int =
    fun
    | H(x) => x;

  module External = {
    [@bs.module "antd/lib/typography"] [@react.component]
    external make:
      (
        ~code: bool=?,
        ~copyable: CopyableProp.js=?,
        ~disabled: bool=?,
        ~editable: EditableProp.js=?,
        ~ellipsis: EllipsisProp.js=?,
        ~level: int=?,
        ~mark: bool=?,
        ~underline: bool=?,
        ~onChange: 'e => unit=?,
        ~_type: string=?,
        ~children: 'c
      ) =>
      React.element =
      "Title";
  };

  [@react.component]
  let make =
      (
        ~code=?,
        ~copyable=?,
        ~disabled=?,
        ~editable=?,
        ~ellipsis=?,
        ~level=?,
        ~mark=?,
        ~underline=?,
        ~onChange=?,
        ~_type=?,
        ~children,
      ) =>
    <External
      ?code
      copyable=?{Belt.Option.map(copyable, CopyableProp.toJs)}
      ?disabled
      editable=?{Belt.Option.map(editable, EditableProp.toJs)}
      ellipsis=?{Belt.Option.map(ellipsis, EllipsisProp.toJs)}
      level=?{Belt.Option.map(level, headingToJS)}
      ?mark
      ?underline
      ?onChange
      _type=?{Belt.Option.map(_type, typoTypeToJs)}>
      children
    </External>;
};

module Paragraph = {
  module External = {
    [@bs.module "antd/lib/typography"] [@react.component]
    external make:
      (
        ~code: bool=?,
        ~copyable: CopyableProp.js=?,
        ~delete: bool=?,
        ~disabled: bool=?,
        ~editable: EditableProp.js=?,
        ~ellipsis: EllipsisProp.js=?,
        ~mark: bool=?,
        ~underline: bool=?,
        ~onChange: string => unit=?,
        ~strong: bool=?,
        ~_type: string=?,
        ~children: 'c
      ) =>
      React.element =
      "Paragraph";
  };

  [@react.component]
  let make =
      (
        ~code=?,
        ~copyable=?,
        ~delete=?,
        ~disabled=?,
        ~editable=?,
        ~ellipsis=?,
        ~mark=?,
        ~underline=?,
        ~onChange=?,
        ~strong=?,
        ~_type=?,
        ~children,
      ) =>
    <External
      ?code
      copyable=?{Belt.Option.map(copyable, CopyableProp.toJs)}
      ?delete
      ?disabled
      editable=?{Belt.Option.map(editable, EditableProp.toJs)}
      ellipsis=?{Belt.Option.map(ellipsis, EllipsisProp.toJs)}
      ?mark
      ?underline
      ?onChange
      ?strong
      _type=?{Belt.Option.map(_type, typoTypeToJs)}>
      children
    </External>;
};
