
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101270 <.text+0x100270>:
10101270:	55                   	push   ebp
10101271:	8b ec                	mov    ebp,esp
10101273:	51                   	push   ecx
10101274:	56                   	push   esi
10101275:	8d b1 68 03 00 00    	lea    esi,[ecx+0x368]
1010127b:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1010127e:	8b ce                	mov    ecx,esi
10101280:	e8 fb 64 f1 ff       	call   0x10017780
10101285:	85 c0                	test   eax,eax
10101287:	75 05                	jne    0x1010128e
10101289:	5e                   	pop    esi
1010128a:	8b e5                	mov    esp,ebp
1010128c:	5d                   	pop    ebp
1010128d:	c3                   	ret
1010128e:	53                   	push   ebx
1010128f:	57                   	push   edi
10101290:	8b ce                	mov    ecx,esi
10101292:	e8 f9 64 f1 ff       	call   0x10017790
10101297:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1010129a:	85 c0                	test   eax,eax
1010129c:	0f 45 c8             	cmovne ecx,eax
1010129f:	33 db                	xor    ebx,ebx
101012a1:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
101012a4:	33 f6                	xor    esi,esi
101012a6:	8d b9 70 03 00 00    	lea    edi,[ecx+0x370]
101012ac:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
101012b0:	83 fe 04             	cmp    esi,0x4
101012b3:	72 04                	jb     0x101012b9
101012b5:	8b c1                	mov    eax,ecx
101012b7:	eb 07                	jmp    0x101012c0
101012b9:	8b cf                	mov    ecx,edi
101012bb:	e8 d0 64 f1 ff       	call   0x10017790
101012c0:	85 c0                	test   eax,eax
101012c2:	8d 4b 01             	lea    ecx,[ebx+0x1]
101012c5:	0f 44 cb             	cmove  ecx,ebx
101012c8:	46                   	inc    esi
101012c9:	83 c7 08             	add    edi,0x8
101012cc:	8b d9                	mov    ebx,ecx
101012ce:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101012d1:	83 fe 05             	cmp    esi,0x5
101012d4:	7c da                	jl     0x101012b0
101012d6:	5f                   	pop    edi
101012d7:	8b c3                	mov    eax,ebx
101012d9:	5b                   	pop    ebx
101012da:	5e                   	pop    esi
101012db:	8b e5                	mov    esp,ebp
101012dd:	5d                   	pop    ebp
101012de:	c3                   	ret
