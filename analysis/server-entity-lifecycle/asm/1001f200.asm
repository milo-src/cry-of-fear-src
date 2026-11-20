
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001f200 <.text+0x1e200>:
1001f200:	55                   	push   ebp
1001f201:	8b ec                	mov    ebp,esp
1001f203:	51                   	push   ecx
1001f204:	53                   	push   ebx
1001f205:	56                   	push   esi
1001f206:	6a 0a                	push   0xa
1001f208:	8d 45 fc             	lea    eax,[ebp-0x4]
1001f20b:	8b d9                	mov    ebx,ecx
1001f20d:	50                   	push   eax
1001f20e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1001f211:	e8 72 d2 15 00       	call   0x1017c488
1001f216:	8d 55 fc             	lea    edx,[ebp-0x4]
1001f219:	83 c4 0c             	add    esp,0xc
1001f21c:	8b f2                	mov    esi,edx
1001f21e:	66 90                	xchg   ax,ax
1001f220:	8a 02                	mov    al,BYTE PTR [edx]
1001f222:	42                   	inc    edx
1001f223:	84 c0                	test   al,al
1001f225:	75 f9                	jne    0x1001f220
1001f227:	57                   	push   edi
1001f228:	2b d6                	sub    edx,esi
1001f22a:	8d bb ff 00 00 00    	lea    edi,[ebx+0xff]
1001f230:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
1001f233:	47                   	inc    edi
1001f234:	84 c0                	test   al,al
1001f236:	75 f8                	jne    0x1001f230
1001f238:	8b ca                	mov    ecx,edx
1001f23a:	c1 e9 02             	shr    ecx,0x2
1001f23d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1001f23f:	8b ca                	mov    ecx,edx
1001f241:	83 e1 03             	and    ecx,0x3
1001f244:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1001f246:	8d b3 00 01 00 00    	lea    esi,[ebx+0x100]
1001f24c:	8b ce                	mov    ecx,esi
1001f24e:	5f                   	pop    edi
1001f24f:	8d 51 01             	lea    edx,[ecx+0x1]
1001f252:	8a 01                	mov    al,BYTE PTR [ecx]
1001f254:	41                   	inc    ecx
1001f255:	84 c0                	test   al,al
1001f257:	75 f9                	jne    0x1001f252
1001f259:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1001f25c:	2b ca                	sub    ecx,edx
1001f25e:	3b 88 50 02 00 00    	cmp    ecx,DWORD PTR [eax+0x250]
1001f264:	0f 8c c3 00 00 00    	jl     0x1001f32d
1001f26a:	56                   	push   esi
1001f26b:	e8 ee c2 14 00       	call   0x1016b55e
1001f270:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1001f273:	83 c4 04             	add    esp,0x4
1001f276:	6a 64                	push   0x64
1001f278:	6a 00                	push   0x0
1001f27a:	83 ec 08             	sub    esp,0x8
1001f27d:	3b 82 48 02 00 00    	cmp    eax,DWORD PTR [edx+0x248]
1001f283:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f288:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
1001f28f:	40 
1001f290:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1001f297:	75 58                	jne    0x1001f2f1
1001f299:	8b 8a f8 01 00 00    	mov    ecx,DWORD PTR [edx+0x1f8]
1001f29f:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001f2a5:	51                   	push   ecx
1001f2a6:	6a 03                	push   0x3
1001f2a8:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1001f2ae:	e8 3d d7 0d 00       	call   0x100fc9f0
1001f2b3:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1001f2b6:	83 c4 1c             	add    esp,0x1c
1001f2b9:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
1001f2bf:	85 c9                	test   ecx,ecx
1001f2c1:	74 4b                	je     0x1001f30e
1001f2c3:	8b 83 00 02 00 00    	mov    eax,DWORD PTR [ebx+0x200]
1001f2c9:	85 c0                	test   eax,eax
1001f2cb:	74 41                	je     0x1001f30e
1001f2cd:	51                   	push   ecx
1001f2ce:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1001f2d5:	6a 03                	push   0x3
1001f2d7:	50                   	push   eax
1001f2d8:	50                   	push   eax
1001f2d9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f2de:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001f2e4:	03 c1                	add    eax,ecx
1001f2e6:	50                   	push   eax
1001f2e7:	e8 04 2d 0e 00       	call   0x10101ff0
1001f2ec:	83 c4 14             	add    esp,0x14
1001f2ef:	eb 1d                	jmp    0x1001f30e
1001f2f1:	8b 8a f4 01 00 00    	mov    ecx,DWORD PTR [edx+0x1f4]
1001f2f7:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001f2fd:	51                   	push   ecx
1001f2fe:	6a 03                	push   0x3
1001f300:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1001f306:	e8 e5 d6 0d 00       	call   0x100fc9f0
1001f30b:	83 c4 1c             	add    esp,0x1c
1001f30e:	c6 06 00             	mov    BYTE PTR [esi],0x0
1001f311:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f316:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f31a:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1001f321:	10 
1001f322:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1001f325:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f32c:	00 
1001f32d:	5e                   	pop    esi
1001f32e:	5b                   	pop    ebx
1001f32f:	8b e5                	mov    esp,ebp
1001f331:	5d                   	pop    ebp
1001f332:	c2 04 00             	ret    0x4
