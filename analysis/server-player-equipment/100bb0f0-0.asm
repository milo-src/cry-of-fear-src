
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bb0f0 <.text+0xba0f0>:
100bb0f0:	55                   	push   ebp
100bb0f1:	8b ec                	mov    ebp,esp
100bb0f3:	56                   	push   esi
100bb0f4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100bb0f7:	8b f1                	mov    esi,ecx
100bb0f9:	e8 62 f3 ff ff       	call   0x100ba460
100bb0fe:	85 c0                	test   eax,eax
100bb100:	74 16                	je     0x100bb118
100bb102:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bb105:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100bb10c:	75 0a                	jne    0x100bb118
100bb10e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100bb111:	8b ce                	mov    ecx,esi
100bb113:	e8 78 f3 ff ff       	call   0x100ba490
100bb118:	5e                   	pop    esi
100bb119:	5d                   	pop    ebp
100bb11a:	c2 04 00             	ret    0x4
