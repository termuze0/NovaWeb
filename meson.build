project('NovaWeb', 'c',
  version: '0.1.0',
  default_options: ['warning_level=2', 'c_std=gnu11']
)

gtkdep = dependency('gtk+-3.0')
webkitdep = dependency('webkit2gtk-4.0')

executable('novaweb',
  ['src/main.c','src/browser_window.c'],
  dependencies: [gtkdep, webkitdep],
  install: true
)

