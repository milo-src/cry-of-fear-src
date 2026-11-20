
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cf310 <.text+0xce310>:
100cf310:	55                   	push   ebp
100cf311:	8b ec                	mov    ebp,esp
100cf313:	83 ec 60             	sub    esp,0x60
100cf316:	53                   	push   ebx
100cf317:	56                   	push   esi
100cf318:	8b f1                	mov    esi,ecx
100cf31a:	bb 01 00 00 00       	mov    ebx,0x1
100cf31f:	57                   	push   edi
100cf320:	8b fb                	mov    edi,ebx
100cf322:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cf325:	c7 40 4c 00 00 00 00 	mov    DWORD PTR [eax+0x4c],0x0
100cf32c:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100cf32f:	3b cb                	cmp    ecx,ebx
100cf331:	7e 1b                	jle    0x100cf34e
100cf333:	ba 58 00 00 00       	mov    edx,0x58
100cf338:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cf33b:	8d 52 58             	lea    edx,[edx+0x58]
100cf33e:	47                   	inc    edi
100cf33f:	c7 44 02 f4 ff ff ff 	mov    DWORD PTR [edx+eax*1-0xc],0xffffffff
100cf346:	ff 
100cf347:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100cf34a:	3b f9                	cmp    edi,ecx
100cf34c:	7c ea                	jl     0x100cf338
100cf34e:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100cf355:	85 c9                	test   ecx,ecx
100cf357:	7e 57                	jle    0x100cf3b0
100cf359:	33 c0                	xor    eax,eax
100cf35b:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100cf35e:	66 90                	xchg   ax,ax
100cf360:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100cf363:	33 ff                	xor    edi,edi
100cf365:	39 7c 10 20          	cmp    DWORD PTR [eax+edx*1+0x20],edi
100cf369:	7e 31                	jle    0x100cf39c
100cf36b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100cf370:	8b 44 10 24          	mov    eax,DWORD PTR [eax+edx*1+0x24]
100cf374:	03 c7                	add    eax,edi
100cf376:	8d 0c 40             	lea    ecx,[eax+eax*2]
100cf379:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
100cf37c:	8b 44 c8 04          	mov    eax,DWORD PTR [eax+ecx*8+0x4]
100cf380:	6b c0 58             	imul   eax,eax,0x58
100cf383:	83 7c 10 4c ff       	cmp    DWORD PTR [eax+edx*1+0x4c],0xffffffff
100cf388:	75 05                	jne    0x100cf38f
100cf38a:	89 5c 10 4c          	mov    DWORD PTR [eax+edx*1+0x4c],ebx
100cf38e:	43                   	inc    ebx
100cf38f:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100cf392:	47                   	inc    edi
100cf393:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100cf396:	3b 7c 10 20          	cmp    edi,DWORD PTR [eax+edx*1+0x20]
100cf39a:	7c d4                	jl     0x100cf370
100cf39c:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
100cf39f:	83 c0 58             	add    eax,0x58
100cf3a2:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100cf3a5:	42                   	inc    edx
100cf3a6:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
100cf3a9:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100cf3ac:	3b d1                	cmp    edx,ecx
100cf3ae:	7c b0                	jl     0x100cf360
100cf3b0:	33 d2                	xor    edx,edx
100cf3b2:	85 c9                	test   ecx,ecx
100cf3b4:	7e 24                	jle    0x100cf3da
100cf3b6:	33 c0                	xor    eax,eax
100cf3b8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cf3bf:	00 
100cf3c0:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cf3c3:	83 7c 08 4c ff       	cmp    DWORD PTR [eax+ecx*1+0x4c],0xffffffff
100cf3c8:	75 05                	jne    0x100cf3cf
100cf3ca:	89 5c 08 4c          	mov    DWORD PTR [eax+ecx*1+0x4c],ebx
100cf3ce:	43                   	inc    ebx
100cf3cf:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100cf3d2:	42                   	inc    edx
100cf3d3:	83 c0 58             	add    eax,0x58
100cf3d6:	3b d1                	cmp    edx,ecx
100cf3d8:	7c e6                	jl     0x100cf3c0
100cf3da:	33 db                	xor    ebx,ebx
100cf3dc:	39 5e 1c             	cmp    DWORD PTR [esi+0x1c],ebx
100cf3df:	7e 34                	jle    0x100cf415
100cf3e1:	33 ff                	xor    edi,edi
100cf3e3:	8b 56 10             	mov    edx,DWORD PTR [esi+0x10]
100cf3e6:	8d 7f 18             	lea    edi,[edi+0x18]
100cf3e9:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cf3ec:	43                   	inc    ebx
100cf3ed:	6b 4c 17 e8 58       	imul   ecx,DWORD PTR [edi+edx*1-0x18],0x58
100cf3f2:	8b 44 01 4c          	mov    eax,DWORD PTR [ecx+eax*1+0x4c]
100cf3f6:	89 44 17 e8          	mov    DWORD PTR [edi+edx*1-0x18],eax
100cf3fa:	8b 56 10             	mov    edx,DWORD PTR [esi+0x10]
100cf3fd:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cf400:	6b 4c 17 ec 58       	imul   ecx,DWORD PTR [edi+edx*1-0x14],0x58
100cf405:	8b 44 01 4c          	mov    eax,DWORD PTR [ecx+eax*1+0x4c]
100cf409:	89 44 17 ec          	mov    DWORD PTR [edi+edx*1-0x14],eax
100cf40d:	3b 5e 1c             	cmp    ebx,DWORD PTR [esi+0x1c]
100cf410:	7c d1                	jl     0x100cf3e3
100cf412:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100cf415:	33 db                	xor    ebx,ebx
100cf417:	85 c9                	test   ecx,ecx
100cf419:	0f 8e 29 01 00 00    	jle    0x100cf548
100cf41f:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cf422:	33 ff                	xor    edi,edi
100cf424:	39 5c 07 4c          	cmp    DWORD PTR [edi+eax*1+0x4c],ebx
100cf428:	0f 84 0d 01 00 00    	je     0x100cf53b
100cf42e:	66 90                	xchg   ax,ax
100cf430:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100cf433:	6b 4c 17 4c 58       	imul   ecx,DWORD PTR [edi+edx*1+0x4c],0x58
100cf438:	0f 10 04 11          	movups xmm0,XMMWORD PTR [ecx+edx*1]
100cf43c:	0f b7 44 11 18       	movzx  eax,WORD PTR [ecx+edx*1+0x18]
100cf441:	66 89 45 b8          	mov    WORD PTR [ebp-0x48],ax
100cf445:	8a 44 11 1a          	mov    al,BYTE PTR [ecx+edx*1+0x1a]
100cf449:	0f 11 45 a0          	movups XMMWORD PTR [ebp-0x60],xmm0
100cf44d:	88 45 ba             	mov    BYTE PTR [ebp-0x46],al
100cf450:	f3 0f 10 44 11 10    	movss  xmm0,DWORD PTR [ecx+edx*1+0x10]
100cf456:	8b 44 11 1c          	mov    eax,DWORD PTR [ecx+edx*1+0x1c]
100cf45a:	f3 0f 11 45 b0       	movss  DWORD PTR [ebp-0x50],xmm0
100cf45f:	f3 0f 10 44 11 14    	movss  xmm0,DWORD PTR [ecx+edx*1+0x14]
100cf465:	f3 0f 11 45 b4       	movss  DWORD PTR [ebp-0x4c],xmm0
100cf46a:	0f 10 44 11 28       	movups xmm0,XMMWORD PTR [ecx+edx*1+0x28]
100cf46f:	89 45 bc             	mov    DWORD PTR [ebp-0x44],eax
100cf472:	8b 44 11 20          	mov    eax,DWORD PTR [ecx+edx*1+0x20]
100cf476:	0f 11 45 c8          	movups XMMWORD PTR [ebp-0x38],xmm0
100cf47a:	89 45 c0             	mov    DWORD PTR [ebp-0x40],eax
100cf47d:	0f 10 44 11 38       	movups xmm0,XMMWORD PTR [ecx+edx*1+0x38]
100cf482:	8b 44 11 24          	mov    eax,DWORD PTR [ecx+edx*1+0x24]
100cf486:	89 45 c4             	mov    DWORD PTR [ebp-0x3c],eax
100cf489:	8b 44 11 4c          	mov    eax,DWORD PTR [ecx+edx*1+0x4c]
100cf48d:	0f 11 45 d8          	movups XMMWORD PTR [ebp-0x28],xmm0
100cf491:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
100cf494:	f3 0f 10 44 11 48    	movss  xmm0,DWORD PTR [ecx+edx*1+0x48]
100cf49a:	0f b7 44 11 50       	movzx  eax,WORD PTR [ecx+edx*1+0x50]
100cf49f:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
100cf4a4:	f3 0f 10 44 11 54    	movss  xmm0,DWORD PTR [ecx+edx*1+0x54]
100cf4aa:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100cf4af:	0f 10 04 17          	movups xmm0,XMMWORD PTR [edi+edx*1]
100cf4b3:	66 89 45 f0          	mov    WORD PTR [ebp-0x10],ax
100cf4b7:	0f b7 44 11 52       	movzx  eax,WORD PTR [ecx+edx*1+0x52]
100cf4bc:	0f 11 04 11          	movups XMMWORD PTR [ecx+edx*1],xmm0
100cf4c0:	66 89 45 f2          	mov    WORD PTR [ebp-0xe],ax
100cf4c4:	0f 10 44 17 10       	movups xmm0,XMMWORD PTR [edi+edx*1+0x10]
100cf4c9:	0f 11 44 11 10       	movups XMMWORD PTR [ecx+edx*1+0x10],xmm0
100cf4ce:	0f 10 44 17 20       	movups xmm0,XMMWORD PTR [edi+edx*1+0x20]
100cf4d3:	0f 11 44 11 20       	movups XMMWORD PTR [ecx+edx*1+0x20],xmm0
100cf4d8:	0f 10 44 17 30       	movups xmm0,XMMWORD PTR [edi+edx*1+0x30]
100cf4dd:	0f 11 44 11 30       	movups XMMWORD PTR [ecx+edx*1+0x30],xmm0
100cf4e2:	0f 10 44 17 40       	movups xmm0,XMMWORD PTR [edi+edx*1+0x40]
100cf4e7:	0f 11 44 11 40       	movups XMMWORD PTR [ecx+edx*1+0x40],xmm0
100cf4ec:	f3 0f 7e 44 17 50    	movq   xmm0,QWORD PTR [edi+edx*1+0x50]
100cf4f2:	66 0f d6 44 11 50    	movq   QWORD PTR [ecx+edx*1+0x50],xmm0
100cf4f8:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cf4fb:	0f 10 45 a0          	movups xmm0,XMMWORD PTR [ebp-0x60]
100cf4ff:	03 c7                	add    eax,edi
100cf501:	0f 11 00             	movups XMMWORD PTR [eax],xmm0
100cf504:	0f 10 45 b0          	movups xmm0,XMMWORD PTR [ebp-0x50]
100cf508:	0f 11 40 10          	movups XMMWORD PTR [eax+0x10],xmm0
100cf50c:	0f 10 45 c0          	movups xmm0,XMMWORD PTR [ebp-0x40]
100cf510:	0f 11 40 20          	movups XMMWORD PTR [eax+0x20],xmm0
100cf514:	0f 10 45 d0          	movups xmm0,XMMWORD PTR [ebp-0x30]
100cf518:	0f 11 40 30          	movups XMMWORD PTR [eax+0x30],xmm0
100cf51c:	0f 10 45 e0          	movups xmm0,XMMWORD PTR [ebp-0x20]
100cf520:	0f 11 40 40          	movups XMMWORD PTR [eax+0x40],xmm0
100cf524:	f3 0f 7e 45 f0       	movq   xmm0,QWORD PTR [ebp-0x10]
100cf529:	66 0f d6 40 50       	movq   QWORD PTR [eax+0x50],xmm0
100cf52e:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cf531:	39 5c 07 4c          	cmp    DWORD PTR [edi+eax*1+0x4c],ebx
100cf535:	0f 85 f5 fe ff ff    	jne    0x100cf430
100cf53b:	43                   	inc    ebx
100cf53c:	83 c7 58             	add    edi,0x58
100cf53f:	3b 5e 18             	cmp    ebx,DWORD PTR [esi+0x18]
100cf542:	0f 8c dc fe ff ff    	jl     0x100cf424
100cf548:	5f                   	pop    edi
100cf549:	5e                   	pop    esi
100cf54a:	5b                   	pop    ebx
100cf54b:	8b e5                	mov    esp,ebp
100cf54d:	5d                   	pop    ebp
100cf54e:	c3                   	ret
