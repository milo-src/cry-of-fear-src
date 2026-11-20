
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1a20 <.text+0xc0a20>:
100c1a20:	55                   	push   ebp
100c1a21:	8b ec                	mov    ebp,esp
100c1a23:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c1a26:	33 c9                	xor    ecx,ecx
100c1a28:	a8 01                	test   al,0x1
100c1a2a:	74 09                	je     0x100c1a35
100c1a2c:	b8 01 00 00 00       	mov    eax,0x1
100c1a31:	5d                   	pop    ebp
100c1a32:	c2 04 00             	ret    0x4
100c1a35:	a8 02                	test   al,0x2
100c1a37:	74 09                	je     0x100c1a42
100c1a39:	b8 02 00 00 00       	mov    eax,0x2
100c1a3e:	5d                   	pop    ebp
100c1a3f:	c2 04 00             	ret    0x4
100c1a42:	a8 10                	test   al,0x10
100c1a44:	74 09                	je     0x100c1a4f
100c1a46:	b8 10 00 00 00       	mov    eax,0x10
100c1a4b:	5d                   	pop    ebp
100c1a4c:	c2 04 00             	ret    0x4
100c1a4f:	a8 20                	test   al,0x20
100c1a51:	74 09                	je     0x100c1a5c
100c1a53:	b8 20 00 00 00       	mov    eax,0x20
100c1a58:	5d                   	pop    ebp
100c1a59:	c2 04 00             	ret    0x4
100c1a5c:	a8 40                	test   al,0x40
100c1a5e:	b8 40 00 00 00       	mov    eax,0x40
100c1a63:	0f 45 c8             	cmovne ecx,eax
100c1a66:	8b c1                	mov    eax,ecx
100c1a68:	5d                   	pop    ebp
100c1a69:	c2 04 00             	ret    0x4
