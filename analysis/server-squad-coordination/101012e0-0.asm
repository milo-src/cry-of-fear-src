
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101012e0 <.text+0x1002e0>:
101012e0:	55                   	push   ebp
101012e1:	8b ec                	mov    ebp,esp
101012e3:	83 ec 08             	sub    esp,0x8
101012e6:	53                   	push   ebx
101012e7:	8b d9                	mov    ebx,ecx
101012e9:	56                   	push   esi
101012ea:	57                   	push   edi
101012eb:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
101012f1:	e8 8a 64 f1 ff       	call   0x10017780
101012f6:	85 c0                	test   eax,eax
101012f8:	74 66                	je     0x10101360
101012fa:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
10101300:	e8 8b 64 f1 ff       	call   0x10017790
10101305:	85 c0                	test   eax,eax
10101307:	0f 45 d8             	cmovne ebx,eax
1010130a:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
1010130d:	8d 8b 84 01 00 00    	lea    ecx,[ebx+0x184]
10101313:	e8 78 64 f1 ff       	call   0x10017790
10101318:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1010131b:	8d bb 70 03 00 00    	lea    edi,[ebx+0x370]
10101321:	33 f6                	xor    esi,esi
10101323:	83 fe 04             	cmp    esi,0x4
10101326:	72 04                	jb     0x1010132c
10101328:	8b c3                	mov    eax,ebx
1010132a:	eb 07                	jmp    0x10101333
1010132c:	8b cf                	mov    ecx,edi
1010132e:	e8 5d 64 f1 ff       	call   0x10017790
10101333:	85 c0                	test   eax,eax
10101335:	74 20                	je     0x10101357
10101337:	8d 98 84 01 00 00    	lea    ebx,[eax+0x184]
1010133d:	8b cb                	mov    ecx,ebx
1010133f:	e8 3c 64 f1 ff       	call   0x10017780
10101344:	85 c0                	test   eax,eax
10101346:	74 0c                	je     0x10101354
10101348:	8b cb                	mov    ecx,ebx
1010134a:	e8 41 64 f1 ff       	call   0x10017790
1010134f:	3b 45 f8             	cmp    eax,DWORD PTR [ebp-0x8]
10101352:	75 15                	jne    0x10101369
10101354:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
10101357:	46                   	inc    esi
10101358:	83 c7 08             	add    edi,0x8
1010135b:	83 fe 05             	cmp    esi,0x5
1010135e:	7c c3                	jl     0x10101323
10101360:	5f                   	pop    edi
10101361:	5e                   	pop    esi
10101362:	33 c0                	xor    eax,eax
10101364:	5b                   	pop    ebx
10101365:	8b e5                	mov    esp,ebp
10101367:	5d                   	pop    ebp
10101368:	c3                   	ret
10101369:	5f                   	pop    edi
1010136a:	5e                   	pop    esi
1010136b:	b8 01 00 00 00       	mov    eax,0x1
10101370:	5b                   	pop    ebx
10101371:	8b e5                	mov    esp,ebp
10101373:	5d                   	pop    ebp
10101374:	c3                   	ret
