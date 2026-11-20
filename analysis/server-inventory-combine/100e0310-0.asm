
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e0310 <.text+0xdf310>:
100e0310:	55                   	push   ebp
100e0311:	8b ec                	mov    ebp,esp
100e0313:	51                   	push   ecx
100e0314:	53                   	push   ebx
100e0315:	56                   	push   esi
100e0316:	8d 81 14 25 00 00    	lea    eax,[ecx+0x2514]
100e031c:	33 db                	xor    ebx,ebx
100e031e:	57                   	push   edi
100e031f:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100e0322:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e0325:	8b 30                	mov    esi,DWORD PTR [eax]
100e0327:	85 f6                	test   esi,esi
100e0329:	74 28                	je     0x100e0353
100e032b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e0330:	8b 06                	mov    eax,DWORD PTR [esi]
100e0332:	8b ce                	mov    ecx,esi
100e0334:	ff 90 74 01 00 00    	call   DWORD PTR [eax+0x174]
100e033a:	85 c0                	test   eax,eax
100e033c:	74 08                	je     0x100e0346
100e033e:	39 b8 68 01 00 00    	cmp    DWORD PTR [eax+0x168],edi
100e0344:	74 1b                	je     0x100e0361
100e0346:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100e034c:	85 f6                	test   esi,esi
100e034e:	75 e0                	jne    0x100e0330
100e0350:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100e0353:	43                   	inc    ebx
100e0354:	83 c0 04             	add    eax,0x4
100e0357:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e035a:	83 fb 06             	cmp    ebx,0x6
100e035d:	7c c6                	jl     0x100e0325
100e035f:	33 c0                	xor    eax,eax
100e0361:	5f                   	pop    edi
100e0362:	5e                   	pop    esi
100e0363:	5b                   	pop    ebx
100e0364:	8b e5                	mov    esp,ebp
100e0366:	5d                   	pop    ebp
100e0367:	c2 04 00             	ret    0x4
