
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008f2f0 <.text+0x8e2f0>:
1008f2f0:	55                   	push   ebp
1008f2f1:	8b ec                	mov    ebp,esp
1008f2f3:	57                   	push   edi
1008f2f4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008f2f7:	8b f9                	mov    edi,ecx
1008f2f9:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
1008f2ff:	e8 3c 84 f8 ff       	call   0x10017740
1008f304:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008f307:	ff b7 7c 01 00 00    	push   DWORD PTR [edi+0x17c]
1008f30d:	e8 4e 9d 08 00       	call   0x10119060
1008f312:	83 c4 08             	add    esp,0x8
1008f315:	85 c0                	test   eax,eax
1008f317:	0f 84 81 00 00 00    	je     0x1008f39e
1008f31d:	83 bf ac 01 00 00 00 	cmp    DWORD PTR [edi+0x1ac],0x0
1008f324:	74 4a                	je     0x1008f370
1008f326:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1008f329:	83 f8 01             	cmp    eax,0x1
1008f32c:	75 2a                	jne    0x1008f358
1008f32e:	39 87 00 01 00 00    	cmp    DWORD PTR [edi+0x100],eax
1008f334:	75 68                	jne    0x1008f39e
1008f336:	6a 00                	push   0x0
1008f338:	6a 00                	push   0x0
1008f33a:	8d 87 84 01 00 00    	lea    eax,[edi+0x184]
1008f340:	50                   	push   eax
1008f341:	ff 77 04             	push   DWORD PTR [edi+0x4]
1008f344:	e8 c7 ec ff ff       	call   0x1008e010
1008f349:	83 c4 10             	add    esp,0x10
1008f34c:	8b cf                	mov    ecx,edi
1008f34e:	e8 2d e1 ff ff       	call   0x1008d480
1008f353:	5f                   	pop    edi
1008f354:	5d                   	pop    ebp
1008f355:	c2 10 00             	ret    0x10
1008f358:	85 c0                	test   eax,eax
1008f35a:	75 14                	jne    0x1008f370
1008f35c:	39 87 00 01 00 00    	cmp    DWORD PTR [edi+0x100],eax
1008f362:	75 3a                	jne    0x1008f39e
1008f364:	8b cf                	mov    ecx,edi
1008f366:	e8 b5 df ff ff       	call   0x1008d320
1008f36b:	5f                   	pop    edi
1008f36c:	5d                   	pop    ebp
1008f36d:	c2 10 00             	ret    0x10
1008f370:	8b 87 00 01 00 00    	mov    eax,DWORD PTR [edi+0x100]
1008f376:	85 c0                	test   eax,eax
1008f378:	75 18                	jne    0x1008f392
1008f37a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008f37d:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
1008f384:	74 18                	je     0x1008f39e
1008f386:	8b cf                	mov    ecx,edi
1008f388:	e8 d3 de ff ff       	call   0x1008d260
1008f38d:	5f                   	pop    edi
1008f38e:	5d                   	pop    ebp
1008f38f:	c2 10 00             	ret    0x10
1008f392:	83 f8 01             	cmp    eax,0x1
1008f395:	75 07                	jne    0x1008f39e
1008f397:	8b cf                	mov    ecx,edi
1008f399:	e8 c2 de ff ff       	call   0x1008d260
1008f39e:	5f                   	pop    edi
1008f39f:	5d                   	pop    ebp
1008f3a0:	c2 10 00             	ret    0x10
