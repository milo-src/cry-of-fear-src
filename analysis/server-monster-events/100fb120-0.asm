
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fb120 <.text+0xfa120>:
100fb120:	55                   	push   ebp
100fb121:	8b ec                	mov    ebp,esp
100fb123:	53                   	push   ebx
100fb124:	56                   	push   esi
100fb125:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100fb128:	ba b8 dd 1d 10       	mov    edx,0x101dddb8
100fb12d:	57                   	push   edi
100fb12e:	8b f9                	mov    edi,ecx
100fb130:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100fb133:	8b c3                	mov    eax,ebx
100fb135:	8a 08                	mov    cl,BYTE PTR [eax]
100fb137:	3a 0a                	cmp    cl,BYTE PTR [edx]
100fb139:	75 1a                	jne    0x100fb155
100fb13b:	84 c9                	test   cl,cl
100fb13d:	74 12                	je     0x100fb151
100fb13f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100fb142:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100fb145:	75 0e                	jne    0x100fb155
100fb147:	83 c0 02             	add    eax,0x2
100fb14a:	83 c2 02             	add    edx,0x2
100fb14d:	84 c9                	test   cl,cl
100fb14f:	75 e4                	jne    0x100fb135
100fb151:	33 c0                	xor    eax,eax
100fb153:	eb 05                	jmp    0x100fb15a
100fb155:	1b c0                	sbb    eax,eax
100fb157:	83 c8 01             	or     eax,0x1
100fb15a:	85 c0                	test   eax,eax
100fb15c:	75 20                	jne    0x100fb17e
100fb15e:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb161:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100fb167:	83 c4 04             	add    esp,0x4
100fb16a:	89 87 6c 03 00 00    	mov    DWORD PTR [edi+0x36c],eax
100fb170:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb177:	5f                   	pop    edi
100fb178:	5e                   	pop    esi
100fb179:	5b                   	pop    ebx
100fb17a:	5d                   	pop    ebp
100fb17b:	c2 04 00             	ret    0x4
100fb17e:	b9 c4 dd 1d 10       	mov    ecx,0x101dddc4
100fb183:	8b c3                	mov    eax,ebx
100fb185:	8a 10                	mov    dl,BYTE PTR [eax]
100fb187:	3a 11                	cmp    dl,BYTE PTR [ecx]
100fb189:	75 1a                	jne    0x100fb1a5
100fb18b:	84 d2                	test   dl,dl
100fb18d:	74 12                	je     0x100fb1a1
100fb18f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100fb192:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100fb195:	75 0e                	jne    0x100fb1a5
100fb197:	83 c0 02             	add    eax,0x2
100fb19a:	83 c1 02             	add    ecx,0x2
100fb19d:	84 d2                	test   dl,dl
100fb19f:	75 e4                	jne    0x100fb185
100fb1a1:	33 c0                	xor    eax,eax
100fb1a3:	eb 05                	jmp    0x100fb1aa
100fb1a5:	1b c0                	sbb    eax,eax
100fb1a7:	83 c8 01             	or     eax,0x1
100fb1aa:	85 c0                	test   eax,eax
100fb1ac:	75 20                	jne    0x100fb1ce
100fb1ae:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb1b1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100fb1b7:	83 c4 04             	add    esp,0x4
100fb1ba:	89 87 70 03 00 00    	mov    DWORD PTR [edi+0x370],eax
100fb1c0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb1c7:	5f                   	pop    edi
100fb1c8:	5e                   	pop    esi
100fb1c9:	5b                   	pop    ebx
100fb1ca:	5d                   	pop    ebp
100fb1cb:	c2 04 00             	ret    0x4
100fb1ce:	b9 9c 7f 1d 10       	mov    ecx,0x101d7f9c
100fb1d3:	8b c3                	mov    eax,ebx
100fb1d5:	8a 10                	mov    dl,BYTE PTR [eax]
100fb1d7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100fb1d9:	75 1a                	jne    0x100fb1f5
100fb1db:	84 d2                	test   dl,dl
100fb1dd:	74 12                	je     0x100fb1f1
100fb1df:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100fb1e2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100fb1e5:	75 0e                	jne    0x100fb1f5
100fb1e7:	83 c0 02             	add    eax,0x2
100fb1ea:	83 c1 02             	add    ecx,0x2
100fb1ed:	84 d2                	test   dl,dl
100fb1ef:	75 e4                	jne    0x100fb1d5
100fb1f1:	33 c0                	xor    eax,eax
100fb1f3:	eb 05                	jmp    0x100fb1fa
100fb1f5:	1b c0                	sbb    eax,eax
100fb1f7:	83 c8 01             	or     eax,0x1
100fb1fa:	85 c0                	test   eax,eax
100fb1fc:	75 20                	jne    0x100fb21e
100fb1fe:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb201:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100fb207:	83 c4 04             	add    esp,0x4
100fb20a:	89 87 74 03 00 00    	mov    DWORD PTR [edi+0x374],eax
100fb210:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb217:	5f                   	pop    edi
100fb218:	5e                   	pop    esi
100fb219:	5b                   	pop    ebx
100fb21a:	5d                   	pop    ebp
100fb21b:	c2 04 00             	ret    0x4
100fb21e:	68 d0 dd 1d 10       	push   0x101dddd0
100fb223:	53                   	push   ebx
100fb224:	e8 77 f9 f0 ff       	call   0x1000aba0
100fb229:	83 c4 08             	add    esp,0x8
100fb22c:	85 c0                	test   eax,eax
100fb22e:	74 20                	je     0x100fb250
100fb230:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb233:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100fb239:	83 c4 04             	add    esp,0x4
100fb23c:	89 87 78 03 00 00    	mov    DWORD PTR [edi+0x378],eax
100fb242:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb249:	5f                   	pop    edi
100fb24a:	5e                   	pop    esi
100fb24b:	5b                   	pop    ebx
100fb24c:	5d                   	pop    ebp
100fb24d:	c2 04 00             	ret    0x4
100fb250:	68 dc dd 1d 10       	push   0x101ddddc
100fb255:	53                   	push   ebx
100fb256:	e8 45 f9 f0 ff       	call   0x1000aba0
100fb25b:	83 c4 08             	add    esp,0x8
100fb25e:	85 c0                	test   eax,eax
100fb260:	74 20                	je     0x100fb282
100fb262:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb265:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100fb26b:	83 c4 04             	add    esp,0x4
100fb26e:	89 87 7c 03 00 00    	mov    DWORD PTR [edi+0x37c],eax
100fb274:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb27b:	5f                   	pop    edi
100fb27c:	5e                   	pop    esi
100fb27d:	5b                   	pop    ebx
100fb27e:	5d                   	pop    ebp
100fb27f:	c2 04 00             	ret    0x4
100fb282:	68 ec dd 1d 10       	push   0x101dddec
100fb287:	53                   	push   ebx
100fb288:	e8 13 f9 f0 ff       	call   0x1000aba0
100fb28d:	83 c4 08             	add    esp,0x8
100fb290:	85 c0                	test   eax,eax
100fb292:	74 20                	je     0x100fb2b4
100fb294:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb297:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100fb29d:	83 c4 04             	add    esp,0x4
100fb2a0:	89 87 80 03 00 00    	mov    DWORD PTR [edi+0x380],eax
100fb2a6:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb2ad:	5f                   	pop    edi
100fb2ae:	5e                   	pop    esi
100fb2af:	5b                   	pop    ebx
100fb2b0:	5d                   	pop    ebp
100fb2b1:	c2 04 00             	ret    0x4
100fb2b4:	68 00 de 1d 10       	push   0x101dde00
100fb2b9:	53                   	push   ebx
100fb2ba:	e8 e1 f8 f0 ff       	call   0x1000aba0
100fb2bf:	83 c4 08             	add    esp,0x8
100fb2c2:	85 c0                	test   eax,eax
100fb2c4:	74 1f                	je     0x100fb2e5
100fb2c6:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb2c9:	e8 90 02 07 00       	call   0x1016b55e
100fb2ce:	83 c4 04             	add    esp,0x4
100fb2d1:	89 87 84 03 00 00    	mov    DWORD PTR [edi+0x384],eax
100fb2d7:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb2de:	5f                   	pop    edi
100fb2df:	5e                   	pop    esi
100fb2e0:	5b                   	pop    ebx
100fb2e1:	5d                   	pop    ebp
100fb2e2:	c2 04 00             	ret    0x4
100fb2e5:	68 0c de 1d 10       	push   0x101dde0c
100fb2ea:	53                   	push   ebx
100fb2eb:	e8 b0 f8 f0 ff       	call   0x1000aba0
100fb2f0:	83 c4 08             	add    esp,0x8
100fb2f3:	85 c0                	test   eax,eax
100fb2f5:	74 1f                	je     0x100fb316
100fb2f7:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb2fa:	e8 5f 02 07 00       	call   0x1016b55e
100fb2ff:	83 c4 04             	add    esp,0x4
100fb302:	89 87 88 03 00 00    	mov    DWORD PTR [edi+0x388],eax
100fb308:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb30f:	5f                   	pop    edi
100fb310:	5e                   	pop    esi
100fb311:	5b                   	pop    ebx
100fb312:	5d                   	pop    ebp
100fb313:	c2 04 00             	ret    0x4
100fb316:	68 18 de 1d 10       	push   0x101dde18
100fb31b:	53                   	push   ebx
100fb31c:	e8 7f f8 f0 ff       	call   0x1000aba0
100fb321:	83 c4 08             	add    esp,0x8
100fb324:	85 c0                	test   eax,eax
100fb326:	74 1f                	je     0x100fb347
100fb328:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb32b:	e8 2e 02 07 00       	call   0x1016b55e
100fb330:	83 c4 04             	add    esp,0x4
100fb333:	89 87 8c 03 00 00    	mov    DWORD PTR [edi+0x38c],eax
100fb339:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb340:	5f                   	pop    edi
100fb341:	5e                   	pop    esi
100fb342:	5b                   	pop    ebx
100fb343:	5d                   	pop    ebp
100fb344:	c2 04 00             	ret    0x4
100fb347:	68 10 db 1d 10       	push   0x101ddb10
100fb34c:	53                   	push   ebx
100fb34d:	e8 4e f8 f0 ff       	call   0x1000aba0
100fb352:	83 c4 08             	add    esp,0x8
100fb355:	85 c0                	test   eax,eax
100fb357:	74 1f                	je     0x100fb378
100fb359:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb35c:	e8 8b 42 07 00       	call   0x1016f5ec
100fb361:	83 c4 04             	add    esp,0x4
100fb364:	d9 9f 94 03 00 00    	fstp   DWORD PTR [edi+0x394]
100fb36a:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb371:	5f                   	pop    edi
100fb372:	5e                   	pop    esi
100fb373:	5b                   	pop    ebx
100fb374:	5d                   	pop    ebp
100fb375:	c2 04 00             	ret    0x4
100fb378:	68 24 de 1d 10       	push   0x101dde24
100fb37d:	53                   	push   ebx
100fb37e:	e8 1d f8 f0 ff       	call   0x1000aba0
100fb383:	83 c4 08             	add    esp,0x8
100fb386:	85 c0                	test   eax,eax
100fb388:	74 25                	je     0x100fb3af
100fb38a:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb38d:	e8 cc 01 07 00       	call   0x1016b55e
100fb392:	83 c4 04             	add    esp,0x4
100fb395:	89 87 98 03 00 00    	mov    DWORD PTR [edi+0x398],eax
100fb39b:	89 87 9c 03 00 00    	mov    DWORD PTR [edi+0x39c],eax
100fb3a1:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb3a8:	5f                   	pop    edi
100fb3a9:	5e                   	pop    esi
100fb3aa:	5b                   	pop    ebx
100fb3ab:	5d                   	pop    ebp
100fb3ac:	c2 04 00             	ret    0x4
100fb3af:	68 30 de 1d 10       	push   0x101dde30
100fb3b4:	53                   	push   ebx
100fb3b5:	e8 e6 f7 f0 ff       	call   0x1000aba0
100fb3ba:	83 c4 08             	add    esp,0x8
100fb3bd:	85 c0                	test   eax,eax
100fb3bf:	74 1f                	je     0x100fb3e0
100fb3c1:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb3c4:	e8 23 42 07 00       	call   0x1016f5ec
100fb3c9:	83 c4 04             	add    esp,0x4
100fb3cc:	d9 9f a0 03 00 00    	fstp   DWORD PTR [edi+0x3a0]
100fb3d2:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb3d9:	5f                   	pop    edi
100fb3da:	5e                   	pop    esi
100fb3db:	5b                   	pop    ebx
100fb3dc:	5d                   	pop    ebp
100fb3dd:	c2 04 00             	ret    0x4
100fb3e0:	68 40 de 1d 10       	push   0x101dde40
100fb3e5:	53                   	push   ebx
100fb3e6:	e8 b5 f7 f0 ff       	call   0x1000aba0
100fb3eb:	83 c4 08             	add    esp,0x8
100fb3ee:	85 c0                	test   eax,eax
100fb3f0:	74 1f                	je     0x100fb411
100fb3f2:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb3f5:	e8 64 01 07 00       	call   0x1016b55e
100fb3fa:	83 c4 04             	add    esp,0x4
100fb3fd:	89 87 90 03 00 00    	mov    DWORD PTR [edi+0x390],eax
100fb403:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb40a:	5f                   	pop    edi
100fb40b:	5e                   	pop    esi
100fb40c:	5b                   	pop    ebx
100fb40d:	5d                   	pop    ebp
100fb40e:	c2 04 00             	ret    0x4
100fb411:	68 54 de 1d 10       	push   0x101dde54
100fb416:	53                   	push   ebx
100fb417:	e8 84 f7 f0 ff       	call   0x1000aba0
100fb41c:	83 c4 08             	add    esp,0x8
100fb41f:	85 c0                	test   eax,eax
100fb421:	74 1f                	je     0x100fb442
100fb423:	ff 76 08             	push   DWORD PTR [esi+0x8]
100fb426:	e8 33 01 07 00       	call   0x1016b55e
100fb42b:	83 c4 04             	add    esp,0x4
100fb42e:	89 87 a4 03 00 00    	mov    DWORD PTR [edi+0x3a4],eax
100fb434:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100fb43b:	5f                   	pop    edi
100fb43c:	5e                   	pop    esi
100fb43d:	5b                   	pop    ebx
100fb43e:	5d                   	pop    ebp
100fb43f:	c2 04 00             	ret    0x4
100fb442:	56                   	push   esi
100fb443:	8b cf                	mov    ecx,edi
100fb445:	e8 26 45 fc ff       	call   0x100bf970
100fb44a:	5f                   	pop    edi
100fb44b:	5e                   	pop    esi
100fb44c:	5b                   	pop    ebx
100fb44d:	5d                   	pop    ebp
100fb44e:	c2 04 00             	ret    0x4
