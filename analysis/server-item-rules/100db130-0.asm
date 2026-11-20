
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100db130 <.text+0xda130>:
100db130:	55                   	push   ebp
100db131:	8b ec                	mov    ebp,esp
100db133:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100db136:	83 f8 ff             	cmp    eax,0xffffffff
100db139:	75 06                	jne    0x100db141
100db13b:	0b c0                	or     eax,eax
100db13d:	5d                   	pop    ebp
100db13e:	c2 04 00             	ret    0x4
100db141:	8b 84 81 40 25 00 00 	mov    eax,DWORD PTR [ecx+eax*4+0x2540]
100db148:	5d                   	pop    ebp
100db149:	c2 04 00             	ret    0x4
