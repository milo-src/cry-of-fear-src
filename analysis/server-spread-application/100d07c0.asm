
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d07c0 <.text+0xcf7c0>:
100d07c0:	55                   	push   ebp
100d07c1:	8b ec                	mov    ebp,esp
100d07c3:	8b 81 08 02 00 00    	mov    eax,DWORD PTR [ecx+0x208]
100d07c9:	8b 11                	mov    edx,DWORD PTR [ecx]
100d07cb:	56                   	push   esi
100d07cc:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100d07cf:	56                   	push   esi
100d07d0:	83 e8 01             	sub    eax,0x1
100d07d3:	74 0d                	je     0x100d07e2
100d07d5:	ff 92 f8 01 00 00    	call   DWORD PTR [edx+0x1f8]
100d07db:	8b c6                	mov    eax,esi
100d07dd:	5e                   	pop    esi
100d07de:	5d                   	pop    ebp
100d07df:	c2 04 00             	ret    0x4
100d07e2:	ff 92 fc 01 00 00    	call   DWORD PTR [edx+0x1fc]
100d07e8:	8b c6                	mov    eax,esi
100d07ea:	5e                   	pop    esi
100d07eb:	5d                   	pop    ebp
100d07ec:	c2 04 00             	ret    0x4
