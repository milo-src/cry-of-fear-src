
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c48b0 <.text+0xc38b0>:
100c48b0:	55                   	push   ebp
100c48b1:	8b ec                	mov    ebp,esp
100c48b3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c48b6:	81 48 60 80 00 00 00 	or     DWORD PTR [eax+0x60],0x80
100c48bd:	83 3d 8c 31 22 10 00 	cmp    DWORD PTR ds:0x1022318c,0x0
100c48c4:	74 09                	je     0x100c48cf
100c48c6:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100c48c9:	5d                   	pop    ebp
100c48ca:	e9 81 f5 ff ff       	jmp    0x100c3e50
100c48cf:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100c48d2:	5d                   	pop    ebp
100c48d3:	e9 08 fc ff ff       	jmp    0x100c44e0
