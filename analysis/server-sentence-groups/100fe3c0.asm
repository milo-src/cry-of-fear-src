
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fe3c0 <.text+0xfd3c0>:
100fe3c0:	55                   	push   ebp
100fe3c1:	8b ec                	mov    ebp,esp
100fe3c3:	83 ec 44             	sub    esp,0x44
100fe3c6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fe3cb:	33 c5                	xor    eax,ebp
100fe3cd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fe3d0:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
100fe3d7:	57                   	push   edi
100fe3d8:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100fe3db:	75 12                	jne    0x100fe3ef
100fe3dd:	83 c8 ff             	or     eax,0xffffffff
100fe3e0:	5f                   	pop    edi
100fe3e1:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe3e4:	33 cd                	xor    ecx,ebp
100fe3e6:	e8 c8 f7 03 00       	call   0x1013dbb3
100fe3eb:	8b e5                	mov    esp,ebp
100fe3ed:	5d                   	pop    ebp
100fe3ee:	c3                   	ret
100fe3ef:	56                   	push   esi
100fe3f0:	8d 45 bc             	lea    eax,[ebp-0x44]
100fe3f3:	c6 45 bc 00          	mov    BYTE PTR [ebp-0x44],0x0
100fe3f7:	50                   	push   eax
100fe3f8:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100fe3fb:	e8 80 1c 00 00       	call   0x10100080
100fe400:	8b f0                	mov    esi,eax
100fe402:	83 c4 08             	add    esp,0x8
100fe405:	85 f6                	test   esi,esi
100fe407:	7e 2d                	jle    0x100fe436
100fe409:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
100fe40c:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100fe411:	8d 45 bc             	lea    eax,[ebp-0x44]
100fe414:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100fe417:	83 ec 08             	sub    esp,0x8
100fe41a:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100fe420:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100fe425:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100fe42a:	50                   	push   eax
100fe42b:	6a 02                	push   0x2
100fe42d:	57                   	push   edi
100fe42e:	e8 bd e5 ff ff       	call   0x100fc9f0
100fe433:	83 c4 1c             	add    esp,0x1c
100fe436:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe439:	8b c6                	mov    eax,esi
100fe43b:	5e                   	pop    esi
100fe43c:	33 cd                	xor    ecx,ebp
100fe43e:	5f                   	pop    edi
100fe43f:	e8 6f f7 03 00       	call   0x1013dbb3
100fe444:	8b e5                	mov    esp,ebp
100fe446:	5d                   	pop    ebp
100fe447:	c3                   	ret
