type breakpoint = {
  .
  "xs": int,
  "sm": int,
  "md": int,
  "lg": int,
  "xl": int,
  "xxl": int,
};
type coordinate = array(int);
type t =
  | Breakpoints(breakpoint)
  | Coordinates(coordinate)
  | Number(int);

type js;

external ofBreakpoint: breakpoint => js = "%identity";
external ofCoordinate: coordinate => js = "%identity";
external ofInt: int => js = "%identity";

let toJs: t => js =
  fun
  | Breakpoints(a) => ofBreakpoint(a)
  | Coordinates(a) => ofCoordinate(a)
  | Number(a) => ofInt(a);
