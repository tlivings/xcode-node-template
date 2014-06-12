# XCode Project Template for Native Node Modules

This XCode template will help you create [NAN](https://github.com/rvagg/nan) based native node modules that you can work with in XCode.

# Installation

1. Clone [node](https://github.com/joyent/node/).
2. Set a `NODE_SRC` environment variable to point at the node source.
3. Clone this module.
4. Create (if it doesn't exist), the following directory: `~/Library/Developer/Xcode/Templates/Project Templates/Node`
5. Copy `NativeModule.xctemplate` to `~/Library/Developer/Xcode/Templates/Project Templates/Node`.

Now a new `Node` section should appear in your `New>Project...` menu, where you can select `Native Module` to generate a native node module.