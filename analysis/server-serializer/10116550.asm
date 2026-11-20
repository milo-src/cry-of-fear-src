
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116550 <.text+0x115550>:
10116550:	55                   	push   ebp
10116551:	8b ec                	mov    ebp,esp
10116553:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10116556:	85 c0                	test   eax,eax
10116558:	75 07                	jne    0x10116561
1011655a:	83 c8 ff             	or     eax,0xffffffff
1011655d:	5d                   	pop    ebp
1011655e:	c2 04 00             	ret    0x4
10116561:	ff 70 04             	push   DWORD PTR [eax+0x4]
10116564:	e8 c7 ff ff ff       	call   0x10116530
10116569:	5d                   	pop    ebp
1011656a:	c2 04 00             	ret    0x4
