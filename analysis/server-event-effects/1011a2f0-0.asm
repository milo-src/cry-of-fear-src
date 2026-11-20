
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a2f0 <.text+0x1192f0>:
1011a2f0:	55                   	push   ebp
1011a2f1:	8b ec                	mov    ebp,esp
1011a2f3:	83 ec 50             	sub    esp,0x50
1011a2f6:	56                   	push   esi
1011a2f7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011a2fa:	85 f6                	test   esi,esi
1011a2fc:	0f 84 9d 01 00 00    	je     0x1011a49f
1011a302:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011a305:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1011a30b:	85 c0                	test   eax,eax
1011a30d:	0f 84 8c 01 00 00    	je     0x1011a49f
1011a313:	50                   	push   eax
1011a314:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
1011a31a:	83 c4 04             	add    esp,0x4
1011a31d:	85 c0                	test   eax,eax
1011a31f:	0f 84 7a 01 00 00    	je     0x1011a49f
1011a325:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011a328:	8d 4d b0             	lea    ecx,[ebp-0x50]
1011a32b:	0f 57 c0             	xorps  xmm0,xmm0
1011a32e:	51                   	push   ecx
1011a32f:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
1011a336:	00 
1011a337:	f3 0f 10 98 80 01 00 	movss  xmm3,DWORD PTR [eax+0x180]
1011a33e:	00 
1011a33f:	f3 0f 10 88 78 01 00 	movss  xmm1,DWORD PTR [eax+0x178]
1011a346:	00 
1011a347:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
1011a34c:	f3 0f 58 58 10       	addss  xmm3,DWORD PTR [eax+0x10]
1011a351:	f3 0f 58 48 08       	addss  xmm1,DWORD PTR [eax+0x8]
1011a356:	f3 0f 11 55 ec       	movss  DWORD PTR [ebp-0x14],xmm2
1011a35b:	f3 0f 5c d0          	subss  xmm2,xmm0
1011a35f:	f3 0f 11 5d f0       	movss  DWORD PTR [ebp-0x10],xmm3
1011a364:	f3 0f 5c 1d 1c 1f 1a 	subss  xmm3,DWORD PTR ds:0x101a1f1c
1011a36b:	10 
1011a36c:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
1011a371:	f3 0f 5c c8          	subss  xmm1,xmm0
1011a375:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
1011a37a:	f3 0f 11 5d fc       	movss  DWORD PTR [ebp-0x4],xmm3
1011a37f:	f3 0f 11 4d f4       	movss  DWORD PTR [ebp-0xc],xmm1
1011a384:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011a38a:	8d 45 f4             	lea    eax,[ebp-0xc]
1011a38d:	6a 00                	push   0x0
1011a38f:	6a 01                	push   0x1
1011a391:	50                   	push   eax
1011a392:	8d 45 e8             	lea    eax,[ebp-0x18]
1011a395:	50                   	push   eax
1011a396:	e8 85 04 00 00       	call   0x1011a820
1011a39b:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
1011a3a0:	83 c4 18             	add    esp,0x18
1011a3a3:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1011a3aa:	9f                   	lahf
1011a3ab:	f6 c4 44             	test   ah,0x44
1011a3ae:	0f 8b eb 00 00 00    	jnp    0x1011a49f
1011a3b4:	8d 45 c4             	lea    eax,[ebp-0x3c]
1011a3b7:	50                   	push   eax
1011a3b8:	e8 c3 f3 ff ff       	call   0x10119780
1011a3bd:	83 c4 04             	add    esp,0x4
1011a3c0:	83 f8 fd             	cmp    eax,0xfffffffd
1011a3c3:	0f 85 d6 00 00 00    	jne    0x1011a49f
1011a3c9:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1011a3ce:	83 ec 0c             	sub    esp,0xc
1011a3d1:	8b c4                	mov    eax,esp
1011a3d3:	56                   	push   esi
1011a3d4:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1011a3d8:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1011a3dd:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1011a3e2:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1011a3e7:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1011a3ec:	e8 0f 08 00 00       	call   0x1011ac00
1011a3f1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1011a3f4:	83 c4 10             	add    esp,0x10
1011a3f7:	83 e8 01             	sub    eax,0x1
1011a3fa:	74 66                	je     0x1011a462
1011a3fc:	83 e8 01             	sub    eax,0x1
1011a3ff:	74 35                	je     0x1011a436
1011a401:	83 e8 01             	sub    eax,0x1
1011a404:	0f 85 95 00 00 00    	jne    0x1011a49f
1011a40a:	6a 05                	push   0x5
1011a40c:	6a fb                	push   0xfffffffb
1011a40e:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011a414:	83 c4 08             	add    esp,0x8
1011a417:	83 c0 64             	add    eax,0x64
1011a41a:	50                   	push   eax
1011a41b:	6a 00                	push   0x0
1011a41d:	83 ec 08             	sub    esp,0x8
1011a420:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011a427:	3f 
1011a428:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011a42f:	68 d4 91 1a 10       	push   0x101a91d4
1011a434:	eb 56                	jmp    0x1011a48c
1011a436:	6a 05                	push   0x5
1011a438:	6a fb                	push   0xfffffffb
1011a43a:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011a440:	83 c4 08             	add    esp,0x8
1011a443:	83 c0 64             	add    eax,0x64
1011a446:	50                   	push   eax
1011a447:	6a 00                	push   0x0
1011a449:	83 ec 08             	sub    esp,0x8
1011a44c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011a453:	3f 
1011a454:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011a45b:	68 0c 92 1a 10       	push   0x101a920c
1011a460:	eb 2a                	jmp    0x1011a48c
1011a462:	6a 05                	push   0x5
1011a464:	6a fb                	push   0xfffffffb
1011a466:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011a46c:	83 c4 08             	add    esp,0x8
1011a46f:	83 c0 64             	add    eax,0x64
1011a472:	50                   	push   eax
1011a473:	6a 00                	push   0x0
1011a475:	83 ec 08             	sub    esp,0x8
1011a478:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011a47f:	3f 
1011a480:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011a487:	68 ec 91 1a 10       	push   0x101a91ec
1011a48c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011a48f:	6a 00                	push   0x0
1011a491:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011a497:	e8 54 25 fe ff       	call   0x100fc9f0
1011a49c:	83 c4 1c             	add    esp,0x1c
1011a49f:	5e                   	pop    esi
1011a4a0:	8b e5                	mov    esp,ebp
1011a4a2:	5d                   	pop    ebp
1011a4a3:	c3                   	ret
