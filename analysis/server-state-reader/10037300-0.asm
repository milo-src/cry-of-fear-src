
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10037300 <.text+0x36300>:
10037300:	55                   	push   ebp
10037301:	8b ec                	mov    ebp,esp
10037303:	6a ff                	push   0xffffffff
10037305:	68 2d d7 19 10       	push   0x1019d72d
1003730a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10037310:	50                   	push   eax
10037311:	83 ec 3c             	sub    esp,0x3c
10037314:	53                   	push   ebx
10037315:	56                   	push   esi
10037316:	57                   	push   edi
10037317:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1003731c:	33 c5                	xor    eax,ebp
1003731e:	50                   	push   eax
1003731f:	8d 45 f4             	lea    eax,[ebp-0xc]
10037322:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10037328:	89 65 f0             	mov    DWORD PTR [ebp-0x10],esp
1003732b:	8b f1                	mov    esi,ecx
1003732d:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
10037330:	8b 06                	mov    eax,DWORD PTR [esi]
10037332:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10037335:	03 ce                	add    ecx,esi
10037337:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
1003733a:	85 d2                	test   edx,edx
1003733c:	74 39                	je     0x10037377
1003733e:	33 f6                	xor    esi,esi
10037340:	b8 04 00 00 00       	mov    eax,0x4
10037345:	39 71 38             	cmp    DWORD PTR [ecx+0x38],esi
10037348:	0f 45 c6             	cmovne eax,esi
1003734b:	0b c2                	or     eax,edx
1003734d:	83 e0 15             	and    eax,0x15
10037350:	83 c8 02             	or     eax,0x2
10037353:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
10037356:	8b 49 10             	mov    ecx,DWORD PTR [ecx+0x10]
10037359:	23 c8                	and    ecx,eax
1003735b:	0f 85 49 01 00 00    	jne    0x100374aa
10037361:	32 c0                	xor    al,al
10037363:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10037366:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1003736d:	59                   	pop    ecx
1003736e:	5f                   	pop    edi
1003736f:	5e                   	pop    esi
10037370:	5b                   	pop    ebx
10037371:	8b e5                	mov    esp,ebp
10037373:	5d                   	pop    ebp
10037374:	c2 04 00             	ret    0x4
10037377:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
1003737a:	85 c9                	test   ecx,ecx
1003737c:	74 05                	je     0x10037383
1003737e:	e8 4d 08 00 00       	call   0x10037bd0
10037383:	32 db                	xor    bl,bl
10037385:	38 5d 08             	cmp    BYTE PTR [ebp+0x8],bl
10037388:	0f 85 fb 00 00 00    	jne    0x10037489
1003738e:	8b 06                	mov    eax,DWORD PTR [esi]
10037390:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10037393:	f6 44 30 14 01       	test   BYTE PTR [eax+esi*1+0x14],0x1
10037398:	0f 84 eb 00 00 00    	je     0x10037489
1003739e:	8b 44 30 30          	mov    eax,DWORD PTR [eax+esi*1+0x30]
100373a2:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
100373a5:	8b cf                	mov    ecx,edi
100373a7:	89 7d e4             	mov    DWORD PTR [ebp-0x1c],edi
100373aa:	8b 07                	mov    eax,DWORD PTR [edi]
100373ac:	ff 50 04             	call   DWORD PTR [eax+0x4]
100373af:	8d 45 e0             	lea    eax,[ebp-0x20]
100373b2:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100373b9:	50                   	push   eax
100373ba:	e8 91 83 ff ff       	call   0x1002f750
100373bf:	83 c4 04             	add    esp,0x4
100373c2:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100373c5:	85 ff                	test   edi,edi
100373c7:	74 13                	je     0x100373dc
100373c9:	8b 17                	mov    edx,DWORD PTR [edi]
100373cb:	8b cf                	mov    ecx,edi
100373cd:	ff 52 08             	call   DWORD PTR [edx+0x8]
100373d0:	85 c0                	test   eax,eax
100373d2:	74 08                	je     0x100373dc
100373d4:	8b 10                	mov    edx,DWORD PTR [eax]
100373d6:	8b c8                	mov    ecx,eax
100373d8:	6a 01                	push   0x1
100373da:	ff 12                	call   DWORD PTR [edx]
100373dc:	8b 06                	mov    eax,DWORD PTR [esi]
100373de:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
100373e5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100373e8:	8b 4c 30 38          	mov    ecx,DWORD PTR [eax+esi*1+0x38]
100373ec:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
100373ef:	8b 10                	mov    edx,DWORD PTR [eax]
100373f1:	85 d2                	test   edx,edx
100373f3:	74 0d                	je     0x10037402
100373f5:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
100373f8:	83 38 00             	cmp    DWORD PTR [eax],0x0
100373fb:	7e 05                	jle    0x10037402
100373fd:	0f b6 02             	movzx  eax,BYTE PTR [edx]
10037400:	eb 05                	jmp    0x10037407
10037402:	8b 01                	mov    eax,DWORD PTR [ecx]
10037404:	ff 50 18             	call   DWORD PTR [eax+0x18]
10037407:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1003740a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10037410:	83 f8 ff             	cmp    eax,0xffffffff
10037413:	75 04                	jne    0x10037419
10037415:	b3 01                	mov    bl,0x1
10037417:	eb 0c                	jmp    0x10037425
10037419:	0f b6 c8             	movzx  ecx,al
1003741c:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1003741f:	f6 04 48 48          	test   BYTE PTR [eax+ecx*2],0x48
10037423:	75 38                	jne    0x1003745d
10037425:	c7 45 fc ff ff ff ff 	mov    DWORD PTR [ebp-0x4],0xffffffff
1003742c:	84 db                	test   bl,bl
1003742e:	74 59                	je     0x10037489
10037430:	8b 06                	mov    eax,DWORD PTR [esi]
10037432:	33 d2                	xor    edx,edx
10037434:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10037437:	b8 04 00 00 00       	mov    eax,0x4
1003743c:	03 ce                	add    ecx,esi
1003743e:	39 51 38             	cmp    DWORD PTR [ecx+0x38],edx
10037441:	0f 45 c2             	cmovne eax,edx
10037444:	0b 41 0c             	or     eax,DWORD PTR [ecx+0xc]
10037447:	83 e0 14             	and    eax,0x14
1003744a:	83 c8 03             	or     eax,0x3
1003744d:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
10037450:	8b 49 10             	mov    ecx,DWORD PTR [ecx+0x10]
10037453:	23 c8                	and    ecx,eax
10037455:	0f 85 91 00 00 00    	jne    0x100374ec
1003745b:	eb 2c                	jmp    0x10037489
1003745d:	8b 06                	mov    eax,DWORD PTR [esi]
1003745f:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10037462:	8b 4c 31 38          	mov    ecx,DWORD PTR [ecx+esi*1+0x38]
10037466:	e8 c5 0f 00 00       	call   0x10038430
1003746b:	eb a3                	jmp    0x10037410
