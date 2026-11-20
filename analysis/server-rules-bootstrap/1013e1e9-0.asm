
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1013e1e9 <.text+0x13d1e9>:
1013e1e9:	55                   	push   ebp
1013e1ea:	8b ec                	mov    ebp,esp
1013e1ec:	eb 0d                	jmp    0x1013e1fb
1013e1ee:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1013e1f1:	e8 a7 b8 03 00       	call   0x10179a9d
1013e1f6:	59                   	pop    ecx
1013e1f7:	85 c0                	test   eax,eax
1013e1f9:	74 0f                	je     0x1013e20a
1013e1fb:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1013e1fe:	e8 68 73 03 00       	call   0x1017556b
1013e203:	59                   	pop    ecx
1013e204:	85 c0                	test   eax,eax
1013e206:	74 e6                	je     0x1013e1ee
1013e208:	5d                   	pop    ebp
1013e209:	c3                   	ret
1013e20a:	83 7d 08 ff          	cmp    DWORD PTR [ebp+0x8],0xffffffff
1013e20e:	0f 84 b6 0e 00 00    	je     0x1013f0ca
1013e214:	e9 94 0e 00 00       	jmp    0x1013f0ad
