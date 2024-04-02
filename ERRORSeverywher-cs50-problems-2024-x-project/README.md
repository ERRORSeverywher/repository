# Framework_Detector
#### Video Demo:  <[URL HERE](https://youtu.be/Fd5Bmboe7zc)>
#### Description:
This extension for Google Chrome displays the JavaScript frameworks used on the website.

Supported frameworks

[ActiveJS](http://activejs.org/)\*,

    ActiveJS is a framework for creating reactive web applications with elements of event processing, object-oriented programming, and modeling.

[AngularJS](http://angularjs.org/),

    AngularJS is a powerful framework for creating Single Page Applications using HTML templates, directives, event handlers, and more.

[Backbone.js](http://documentcloud.github.com/backbone/),

    Backbone.js is a lightweight framework for structuring client code in web applications that uses models, collections, views, and routers.

[Base2](http://code.google.com/p/base2/),

    Base2 is a library for working with objects and functions in JavaScript, which provides the implementation of a number of useful methods for manipulating data.

[Clientcide Libraries](http://www.clientcide.com/wiki/),

    Clientcide Libraries is a set of useful JavaScript libraries for creating interactive elements of web pages, such as form controls, transition effects, and more.

[Crafty](http://craftyjs.com/)\*,

    Crafty is a framework for creating games in the web environment that provides tools for working with graphics, animation, and physics.

[Cufon](http://cufon.shoqolate.com/)\*,

    Cufon is a JavaScript library for improving the display of text on web pages by using TrueType fonts.

[d3.js](http://mbostock.github.com/d3/),

    d3.js is a framework for creating dynamic and interactive data visualizations in web applications using SVG, HTML, and CSS.

[DHTMLX](http://www.dhtmlx.com/)\*,

    DHTMLX is a set of JavaScript components for creating complex user interfaces in web applications such as calendars, graphs, tables, etc.

[Dojo](http://dojotoolkit.org/),

    Dojo is a comprehensive JavaScript framework for building web applications that provides tools for working with AJAX, widgets, animations, and more.

[Ember](http://emberjs.com/),

    Ember is a JavaScript framework for building ambitious web applications with a high level of complexity. It provides an application structure and tools for working with models, views, and controllers.

[Ext JS](http://www.sencha.com/),

    Ext JS is a JavaScript framework for creating multifunctional user interfaces. It has a wide range of components and tools for developing web applications.

[Glow](http://www.bbc.co.uk/glow/),

    Glow is a JavaScript library created by the BBC for developing web-based user interface applications. It contains a variety of components and tools for creating multifunctional interfaces.

[JavaScriptMVC](http://javascriptmvc.com/)\*,

    JavaScriptMVC is a JavaScript framework for developing client-side applications with a model-view-controller architecture.

[jQuery](http://jquery.com/),

    jQuery is the most popular JavaScript framework that simplifies the selection of DOM elements and interaction with them, as well as provides many other useful tools for developing web applications.

[jQuery UI](http://jqueryui.com/),

    jQuery UI is a set of interactive widgets and effects for jQuery-based websites. It complements the functionality of jQuery and provides a convenient way to add various interface elements.

[Knockout.js](http://knockoutjs.com),

    Knockout.js is a JavaScript library that allows you to automate client-side DOM updates based on model data.

[Midori](http://www.midorijs.com/)\*,

    Midori is a JavaScript framework that helps you build efficient and elegant web applications.

[Modernizr](http://modernizr.com/),

    Modernizr is a JavaScript library that allows you to identify browser capabilities and use them to improve websites.

[MochiKit](http://mochi.github.com/mochikit/),

    MochiKit is a JavaScript library for developing web applications using functional programming.

[MooTools A.R.T.](https://github.com/anutron/art),

    MooTools A.R.T. is an add-on to the MooTools framework that allows you to create animated and interactive effects on websites.

[MooTools Core](http://mootools.net/),

    MooTools Core is a JavaScript framework for developing web applications using object-oriented programming.

[MooTools More](http://mootools.net/),

    MooTools More are add-on modules for the MooTools framework that add additional functionality to develop web applications.

[Processing.js](http://processingjs.org/),

    Processing.js is a JavaScript library for visualizing data and creating visual effects on web pages.

[Prototype](http://www.prototypejs.org/),

    Prototype is a JavaScript framework that provides convenient tools for working with the DOM and Ajax.

[Qooxdoo](http://qooxdoo.org/),

    Qooxdoo is a JavaScript framework for developing cross-platform web applications.

[Raphaël](http://raphaeljs.com/),

    Raphaël is a JavaScript library for creating vector graphics on web pages.

[RequireJS](http://requirejs.org/),

    RequireJS is a JavaScript library that allows you to organize dependencies between modules and load them asynchronously.

[Rico](http://openrico.org/),

    Rico is a JavaScript library for creating multifunctional web applications.

[RightJS](http://rightjs.org/),

    RightJS is a JavaScript framework that provides convenient tools for working with DOM, AJAX, and events.

[Sammy.js](http://sammyjs.org/),

    Sammy.js is a JavaScript library for creating single-page applications using templates and routing.

[Script.aculo.us](http://script.aculo.us/),

    Script.aculo.us is a JavaScript library that provides a variety of animation and interaction effects for websites.

[Scripty2](http://scripty2.com/),

    Scripty2 is a JavaScript library that allows you to easily create complex web interfaces and user interactions.

[Snack](http://snackjs.com/),

    Snack is a JavaScript library that helps you create dynamic, interactive web applications.


[Spine](http://spinejs.com/),

    Spine is a JavaScript framework for building single-page applications using MVC architecture.

[SproutCore](http://www.sproutcore.com/)\*,

    SproutCore is a JavaScript framework for developing large-scale web applications with a multi-tier architecture.

[Spry](http://labs.adobe.com/technologies/spry/)\*,

    Spry is a JavaScript framework from Adobe for creating multifunctional web applications using AJAX and other technologies.

[Underscore.js](http://documentcloud.github.com/underscore/),

    Underscore.js is a JavaScript library that extends the functionality of the JavaScript language and provides convenient tools for working with objects, arrays, and functions.

[YUI](http://developer.yahoo.com/yui/),

    YUI (Yahoo User Interface) is a JavaScript library developed by Yahoo that provides a variety of tools for developing web applications.

[Zepto](http://zeptojs.com/)\*,

    Zepto is a lightweight JavaScript framework for mobile web applications that provides a convenient way to select and interact with DOM elements.

[ZK](http://www.zkoss.org/)\*

    ZK is a JavaScript framework for building multi-tiered web applications using component-based architecture.

====================

File description
====================
### `background.js`.
The backbone of the extension that runs in the background. Responsible for listening to browser events, such as tab changes or page loads, to detect and analyze websites for JavaScript frameworks.

### `content_script.js`.
Implements into web pages visited by the user. Scans HTML, CSS, and JavaScript pages to identify the specific JavaScript frameworks used on the site and passes this information back to `background.js`.

### `inject.js`.
A script that `content_script.js` injects directly into the context of a web page. This allows direct access to the JavaScript environment of the web page, providing detection of JavaScript frameworks that modify the global JavaScript space.

### `Makefile`.
Used to automate the extension build process. Includes tasks such as checking code for bugs (linking), running tests, and packaging the extension for distribution.

### `manifest.json`.
The file metadata required for Chrome extensions. Defines basic extension information (name, version, and permissions) and specifies which scripts to run and when.

### `popup.css`.
CSS file that styles the popup window that appears when the user clicks on the extension icon. Defines the appearance of the popup, ensuring that it is functional and attractive.

### `popup.html`.
The HTML structure of the popup. This file contains markup for displaying the discovered JavaScript frameworks to the user in a convenient way.

### `popup.js`.
JavaScript that controls the behavior of the popup window. Handles user interactions within the popup window and displays a list of detected JavaScript frameworks.
====================

Application functionality
====================
This Google Chrome extension is designed to help developers and inquisitive web enthusiasts identify JavaScript frameworks used on any given website. Here's a breakdown of its functionality:

- **Framework Detection**: Automatically detects JavaScript frameworks used on a website when the page loads. Supports a wide range of frameworks including AngularJS, React, Vue.js and many others listed under supported frameworks.

- **Real-Time Detection**: Actively tracks changes to a website, which may include dynamic script loading, providing accurate detection even on highly dynamic and single page applications (SPAs).

- **User Interface**: Offers a simple and intuitive interface in the form of a pop-up window that displays a list of all detected frameworks with icons and names for easy identification. This window can be accessed by clicking on the extension icon in the Chrome toolbar.

- **User Customization**: Allows users to customize their user experience, including the ability to enable or disable detection of certain frameworks via the extension's settings page (if such functionality is implemented).

- **Privacy Oriented**: Designed with privacy in mind, the extension does not send any user data or website information over the internet. All detection processes are performed locally in the user's browser.
==================
