;
; Olli Savia <ops@iki.fi>
;
; Commodore kernal functions
;

.if .def(__C64__) || .def(__C128__) || .def(__C16__)
  CINT         := $FF81
  IOINIT       := $FF84
  RAMTAS       := $FF87
.elseif .def(__VIC20__)
  CINT         := $E518         ; No entries are in the kernal jump table of the Vic20 for these three (3) functions.
  IOINIT       := $FDF9         ; The entries for these functions have been set to point directly to the functions
  RAMTAS       := $FD8D         ; in the kernal to maintain compatibility with the other Commodore platforms.
.elseif .def(__CBM510__) || .def(__CBM610__)
  IOINIT       := $FF7B
  CINT         := $FF7E
.endif

.if .def(__VIC20__) || .def(__C64__) || .def(__C128__) || .def(__C16__)
  RESTOR       := $FF8A
  VECTOR       := $FF8D
.elseif .def(__CBM510__) || .def(__CBM610__)
  VECTOR       := $FF84
  RESTOR       := $FF87
.endif

.if .def(__CBM510__) || .def(__CBM610__) || .def(__VIC20__) || .def(__C64__) || .def(__C128__) || .def(__C16__)
  SETMSG       := $FF90
  SECOND       := $FF93
  TKSA         := $FF96
  MEMTOP       := $FF99
  MEMBOT       := $FF9C
  SCNKEY       := $FF9F
  SETTMO       := $FFA2
  ACPTR        := $FFA5
  CIOUT        := $FFA8
  UNTLK        := $FFAB
  UNLSN        := $FFAE
  LISTEN       := $FFB1
  TALK         := $FFB4
  READST       := $FFB7
  SETLFS       := $FFBA
  SETNAM       := $FFBD
  OPEN         := $FFC0
  CLOSE        := $FFC3
.endif

; Available on all platforms including PET
CHKIN          := $FFC6
CKOUT          := $FFC9
CLRCH          := $FFCC
BASIN          := $FFCF
CHRIN          := $FFCF
BSOUT          := $FFD2
CHROUT         := $FFD2

.if .def(__CBM510__) || .def(__CBM610__) || .def(__VIC20__) || .def(__C64__) || .def(__C128__) || .def(__C16__)
  LOAD         := $FFD5
  SAVE         := $FFD8
  SETTIM       := $FFDB
  RDTIM        := $FFDE
.endif

; Available on all platforms including PET
STOP           := $FFE1
GETIN          := $FFE4
CLALL          := $FFE7
UDTIM          := $FFEA

.if .def(__CBM510__) || .def(__CBM610__) || .def(__VIC20__) || .def(__C64__) || .def(__C128__) || .def(__C16__)
  SCREEN       := $FFED
  PLOT         := $FFF0
  IOBASE       := $FFF3
.endif
