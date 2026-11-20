
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101006d0 <.text+0xff6d0>:
101006d0:	55                   	push   ebp
101006d1:	8b ec                	mov    ebp,esp
101006d3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
101006d6:	56                   	push   esi
101006d7:	8b f1                	mov    esi,ecx
101006d9:	83 f8 01             	cmp    eax,0x1
101006dc:	75 08                	jne    0x101006e6
101006de:	8b 86 dc 00 00 00    	mov    eax,DWORD PTR [esi+0xdc]
101006e4:	eb 20                	jmp    0x10100706
101006e6:	83 f8 02             	cmp    eax,0x2
101006e9:	75 08                	jne    0x101006f3
101006eb:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
101006f1:	eb 13                	jmp    0x10100706
101006f3:	68 44 ef 1d 10       	push   0x101def44
101006f8:	6a 01                	push   0x1
101006fa:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10100700:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10100703:	83 c4 08             	add    esp,0x8
10100706:	83 f8 ff             	cmp    eax,0xffffffff
10100709:	75 07                	jne    0x10100712
1010070b:	33 c0                	xor    eax,eax
1010070d:	5e                   	pop    esi
1010070e:	5d                   	pop    ebp
1010070f:	c2 04 00             	ret    0x4
10100712:	33 c9                	xor    ecx,ecx
10100714:	c1 e0 05             	shl    eax,0x5
10100717:	41                   	inc    ecx
10100718:	8b 84 30 04 01 00 00 	mov    eax,DWORD PTR [eax+esi*1+0x104]
1010071f:	83 f8 ff             	cmp    eax,0xffffffff
10100722:	75 f0                	jne    0x10100714
10100724:	8b c1                	mov    eax,ecx
10100726:	5e                   	pop    esi
10100727:	5d                   	pop    ebp
10100728:	c2 04 00             	ret    0x4
