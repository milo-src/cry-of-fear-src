
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003570 <.text+0x2570>:
10003570:	55                   	push   ebp
10003571:	8b ec                	mov    ebp,esp
10003573:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10003576:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10003579:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
1000357c:	d8 48 04             	fmul   DWORD PTR [eax+0x4]
1000357f:	d9 01                	fld    DWORD PTR [ecx]
10003581:	d8 08                	fmul   DWORD PTR [eax]
10003583:	de c1                	faddp  st(1),st
10003585:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
10003588:	d8 48 08             	fmul   DWORD PTR [eax+0x8]
1000358b:	de c1                	faddp  st(1),st
1000358d:	5d                   	pop    ebp
1000358e:	c3                   	ret
