
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008c390 <.text+0x8b390>:
1008c390:	55                   	push   ebp
1008c391:	8b ec                	mov    ebp,esp
1008c393:	83 ec 0c             	sub    esp,0xc
1008c396:	f3 0f 10 05 b8 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1eb8
1008c39d:	10 
1008c39e:	f3 0f 10 5d 10       	movss  xmm3,DWORD PTR [ebp+0x10]
1008c3a3:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
1008c3a8:	f3 0f 10 55 18       	movss  xmm2,DWORD PTR [ebp+0x18]
1008c3ad:	f3 0f 59 d8          	mulss  xmm3,xmm0
1008c3b1:	53                   	push   ebx
1008c3b2:	8b 5d 1c             	mov    ebx,DWORD PTR [ebp+0x1c]
1008c3b5:	f3 0f 59 c8          	mulss  xmm1,xmm0
1008c3b9:	56                   	push   esi
1008c3ba:	f3 0f 59 d0          	mulss  xmm2,xmm0
1008c3be:	57                   	push   edi
1008c3bf:	f3 0f 10 43 14       	movss  xmm0,DWORD PTR [ebx+0x14]
1008c3c4:	8b f9                	mov    edi,ecx
1008c3c6:	f3 0f 5c c3          	subss  xmm0,xmm3
1008c3ca:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008c3cd:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008c3d2:	f3 0f 10 43 18       	movss  xmm0,DWORD PTR [ebx+0x18]
1008c3d7:	f3 0f 5c c1          	subss  xmm0,xmm1
1008c3db:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1008c3e0:	f3 0f 10 43 1c       	movss  xmm0,DWORD PTR [ebx+0x1c]
1008c3e5:	f3 0f 5c c2          	subss  xmm0,xmm2
1008c3e9:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1008c3ee:	f3 0f 10 80 70 01 00 	movss  xmm0,DWORD PTR [eax+0x170]
1008c3f5:	00 
1008c3f6:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1008c3fd:	9f                   	lahf
1008c3fe:	f6 c4 44             	test   ah,0x44
1008c401:	0f 8b b6 00 00 00    	jnp    0x1008c4bd
1008c407:	ff 75 20             	push   DWORD PTR [ebp+0x20]
1008c40a:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c40f:	51                   	push   ecx
1008c410:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c415:	57                   	push   edi
1008c416:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008c419:	e8 22 f2 08 00       	call   0x1011b640
1008c41e:	8b 07                	mov    eax,DWORD PTR [edi]
1008c420:	83 c4 10             	add    esp,0x10
1008c423:	8b cf                	mov    ecx,edi
1008c425:	ff 50 70             	call   DWORD PTR [eax+0x70]
1008c428:	89 45 1c             	mov    DWORD PTR [ebp+0x1c],eax
1008c42b:	83 f8 ff             	cmp    eax,0xffffffff
1008c42e:	0f 84 89 00 00 00    	je     0x1008c4bd
1008c434:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1008c437:	83 ec 0c             	sub    esp,0xc
1008c43a:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c43f:	8b d4                	mov    edx,esp
1008c441:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
1008c444:	51                   	push   ecx
1008c445:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c44a:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
1008c44d:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1008c452:	89 0a                	mov    DWORD PTR [edx],ecx
1008c454:	83 ec 0c             	sub    esp,0xc
1008c457:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
1008c45a:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
1008c45d:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
1008c460:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
1008c463:	8b c4                	mov    eax,esp
1008c465:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008c469:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1008c46e:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008c473:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1008c478:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008c47d:	e8 7e 34 09 00       	call   0x1011f900
1008c482:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008c487:	83 c4 20             	add    esp,0x20
1008c48a:	ff 75 20             	push   DWORD PTR [ebp+0x20]
1008c48d:	53                   	push   ebx
1008c48e:	83 ec 0c             	sub    esp,0xc
1008c491:	8b c4                	mov    eax,esp
1008c493:	51                   	push   ecx
1008c494:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008c498:	8b cf                	mov    ecx,edi
1008c49a:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1008c49f:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008c4a4:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
1008c4a9:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008c4ae:	8b 07                	mov    eax,DWORD PTR [edi]
1008c4b0:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c4b5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c4ba:	ff 50 74             	call   DWORD PTR [eax+0x74]
1008c4bd:	5f                   	pop    edi
1008c4be:	5e                   	pop    esi
1008c4bf:	5b                   	pop    ebx
1008c4c0:	8b e5                	mov    esp,ebp
1008c4c2:	5d                   	pop    ebp
1008c4c3:	c2 1c 00             	ret    0x1c
