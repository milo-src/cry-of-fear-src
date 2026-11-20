
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b440 <.text+0x11a440>:
1011b440:	55                   	push   ebp
1011b441:	8b ec                	mov    ebp,esp
1011b443:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1011b446:	56                   	push   esi
1011b447:	57                   	push   edi
1011b448:	8b f9                	mov    edi,ecx
1011b44a:	8d 34 40             	lea    esi,[eax+eax*2]
1011b44d:	c1 e6 02             	shl    esi,0x2
1011b450:	56                   	push   esi
1011b451:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b454:	e8 77 ad ff ff       	call   0x101161d0
1011b459:	56                   	push   esi
1011b45a:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011b45d:	8b cf                	mov    ecx,edi
1011b45f:	e8 dc ac ff ff       	call   0x10116140
1011b464:	5f                   	pop    edi
1011b465:	5e                   	pop    esi
1011b466:	5d                   	pop    ebp
1011b467:	c2 0c 00             	ret    0xc
