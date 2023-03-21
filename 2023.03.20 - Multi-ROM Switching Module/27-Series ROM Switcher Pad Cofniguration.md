# 27-Series ROM Switcher Pad Cofniguration
Given the system ROM and user ROM selection, configure the address line pads as denoted in the following table.  NOTE: do not close the the banking switch when the address line is configured for default or pass-through behavior.

| System ROM Type | User ROM Type | Number of Banks | A13 Pad | A14 Pad | A15 Pad | Notes |
|---|---|---|---|---|---|---|
| 2764 | 2764 | 1 | D | D | D | Adapter PCB not required |
| 2764 | 27128 | 2 | B | D | D |  |
| 2764 | 27256 | 4 | B | B | D |  |
| 2764 | 27512 | 8 | B | B | B |  |
| 27128 | 27128 | 1 | D | D | D | Adapter PCB not required |
| 27128 | 27256 | 2 | D | B | D |  |
| 27128 | 27512 | 4 | D | B | B |  |
| 27256 | 27256 | 1 | D | D | D | Adapter PCB not required |
| 27256 | 27512 | 2 | D | D | B |  |
| 27512 | 27512 | 1 | D | D | D | Adapter PCB not required |