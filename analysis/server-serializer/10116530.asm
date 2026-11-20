
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116530 <.text+0x115530>:
10116530:	55                   	push   ebp
10116531:	8b ec                	mov    ebp,esp
10116533:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10116536:	85 c0                	test   eax,eax
10116538:	75 07                	jne    0x10116541
1011653a:	83 c8 ff             	or     eax,0xffffffff
1011653d:	5d                   	pop    ebp
1011653e:	c2 04 00             	ret    0x4
10116541:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10116547:	e8 a4 ff ff ff       	call   0x101164f0
1011654c:	5d                   	pop    ebp
1011654d:	c2 04 00             	ret    0x4
