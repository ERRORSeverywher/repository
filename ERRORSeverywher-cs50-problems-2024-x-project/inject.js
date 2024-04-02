(function() {
  const frameworks = {
    'ActiveJS':             { abbr: 'AJS',  version: ['ActiveSupport']                      },
    'AngularJS':            { abbr: 'ng',   version: ['angular', 'version', 'full']         },
    'Backbone.js':          { abbr: 'BB',   version: ['Backbone', 'VERSION']                },
    'Base2':                { abbr: 'Base', version: ['base2', 'version']                   },
    'Clientcide Libraries': { abbr: 'Moo',  version: ['Clientcide', 'version']              },
    'Crafty':               { abbr: 'Crf',  version: ['Crafty', 'init']                     },
    'Cufon':                { abbr: 'Cuf',  version: ['Cufon']                              },
    'D3':                   { abbr: 'D3',   version: ['d3', 'version']                      },
    'DHTMLX':               { abbr: 'DHT',  version: ['dhtmlx']                             },
    'Dojo':                 { abbr: 'Dojo', version: function() {
      return window.dojo.version.toString();
    } },
    'Ember':                { abbr: 'Emb',  version: ['Ember', 'VERSION']                   },
    'Ext JS':               { abbr: 'Ext',  version: ['Ext', 'version']                     },
    'Glow':                 { abbr: 'Glw',  version: ['glow', 'VERSION']                    },
    'JavaScriptMVC':        { abbr: 'MVC',  version: ['steal', 'fn']                        },
    'jQuery':               { abbr: 'jQ',   version: ['jQuery', 'fn', 'jquery']             },
    'jQuery UI':            { abbr: 'jQUI', version: ['$', 'ui', 'version']                 },
    'Knockout.js':          { abbr: 'ko',   version: ['ko', 'version']                      },
    'Midori':               { abbr: 'Mid',  version: ['midori', 'domReady']                 },
    'Modernizr':            { abbr: 'Mzr',  version: ['Modernizr', '_version']              },
    'MochiKit':             { abbr: 'MK',   version: ['MochiKit', 'MochiKit', 'VERSION']    },
    'MooTools A.R.T.':      { abbr: 'Moo',  version: ['ART', 'version']                     },
    'MooTools Core':        { abbr: 'Moo',  version: ['MooTools', 'version']                },
    'MooTools More':        { abbr: 'Moo',  version: ['MooTools', 'More', 'version']        },
    'Processing.js':        { abbr: 'Prc',  version: ['Processing', 'version']              },
    'Prototype':            { abbr: 'Pro',  version: ['Prototype', 'Version']               },
    'Qooxdoo':              { abbr: 'Qxd',  version: ['qx', '$$libraries', 'qx', 'version'] },
    'Raphaël':              { abbr: 'Rël',  version: ['Raphael', 'version']                 },
    'RequireJS':            { abbr: 'rjs',  version: ['requirejs', 'version']               },
    'Rico':                 { abbr: 'Ric',  version: ['Rico', 'Version']                    },
    'RightJS':              { abbr: 'Rig',  version: ['RightJS', 'version']                 },
    'Sammy.js':             { abbr: 'Sam',  version: ['Sammy', 'VERSION']                   },
    'Script.aculo.us':      { abbr: 'Scr',  version: ['Scriptaculous', 'Version']           },
    'Scripty2':             { abbr: 'Sc2',  version: ['S2', 'Version']                      },
    'Snack':                { abbr: 'Snc',  version: ['snack', 'v']                         },
    'Spine':                { abbr: 'Spi',  version: ['Spine', 'version']                   },
    'SproutCore':           { abbr: 'SpC',  version: ['SC', 'isReady']                      },
    'Spry':                 { abbr: 'Spr',  version: ['Spry', '$']                          },
    'Underscore.js':        { abbr: '_',    version: ['_', 'VERSION']                       },
    'YUI 2':                { abbr: 'YUI',  version: ['YAHOO', 'VERSION']                   },
    'YUI 3':                { abbr: 'YUI',  version: ['YUI', 'version']                     },
    'Zepto':                { abbr: 'Zept', version: ['Zepto']                              },
    'ZK':                   { abbr: 'ZK',   version: ['zk', 'version']                      }
  };

  const getVersion = (framework) => {
    if (typeof framework.version === 'function') {
      try {
        return framework.version();
      } catch (e) {
        return null;
      }
    } else {
      let version = window;
      for (const prop of framework.version) {
        version = version && version[prop];
        if (!version) break;
      }
      return version;
    }
  };

  const data = Object.entries(frameworks).reduce((acc, [name, framework]) => {
    const version = getVersion(framework);
    if (version && version !== '%build%') {
      acc.push({
        name: name,
        abbr: framework.abbr,
        version: typeof version === 'string' ? version : undefined,
      });
    }
    return acc;
  }, []);

  const messageElement = document.createElement('div');
  messageElement.textContent = JSON.stringify(data);
  messageElement.id = 'frameworks_detector';
  document.body.appendChild(messageElement);
})();