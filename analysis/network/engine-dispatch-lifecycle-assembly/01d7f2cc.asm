 1d7f2cc:	55                   	push   ebp
 1d7f2cd:	8b ec                	mov    ebp,esp
 1d7f2cf:	83 ec 1c             	sub    esp,0x1c
 1d7f2d2:	6a 00                	push   0x0
 1d7f2d4:	68 a0 c1 7f 02       	push   0x27fc1a0
 1d7f2d9:	e8 96 3f 0f 00       	call   0x1e73274
 1d7f2de:	83 c4 08             	add    esp,0x8
 1d7f2e1:	85 c0                	test   eax,eax
 1d7f2e3:	74 0a                	je     0x1d7f2ef
 1d7f2e5:	a1 88 d9 50 02       	mov    eax,ds:0x250d988
 1d7f2ea:	e9 6b 01 00 00       	jmp    0x1d7f45a
 1d7f2ef:	83 3d 88 d9 50 02 03 	cmp    DWORD PTR ds:0x250d988,0x3
 1d7f2f6:	75 09                	jne    0x1d7f301
 1d7f2f8:	83 3d 48 9f 3c 02 00 	cmp    DWORD PTR ds:0x23c9f48,0x0
 1d7f2ff:	75 08                	jne    0x1d7f309
 1d7f301:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d7f304:	a3 88 d9 50 02       	mov    ds:0x250d988,eax
 1d7f309:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
 1d7f30c:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
 1d7f312:	d9 05 94 c9 eb 01    	fld    DWORD PTR ds:0x1ebc994
 1d7f318:	d8 1d 84 c3 e8 01    	fcomp  DWORD PTR ds:0x1e8c384
 1d7f31e:	df e0                	fnstsw ax
 1d7f320:	f6 c4 40             	test   ah,0x40
 1d7f323:	75 08                	jne    0x1d7f32d
 1d7f325:	e8 0d 35 07 00       	call   0x1df2837
 1d7f32a:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
 1d7f32d:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d7f330:	52                   	push   edx
 1d7f331:	e8 c2 fd ff ff       	call   0x1d7f0f8
 1d7f336:	83 c4 04             	add    esp,0x4
 1d7f339:	d9 05 94 c9 eb 01    	fld    DWORD PTR ds:0x1ebc994
 1d7f33f:	d8 1d 84 c3 e8 01    	fcomp  DWORD PTR ds:0x1e8c384
 1d7f345:	df e0                	fnstsw ax
 1d7f347:	f6 c4 40             	test   ah,0x40
 1d7f34a:	75 08                	jne    0x1d7f354
 1d7f34c:	e8 e6 34 07 00       	call   0x1df2837
 1d7f351:	dd 5d f0             	fstp   QWORD PTR [ebp-0x10]
 1d7f354:	83 3d 64 9f 49 02 00 	cmp    DWORD PTR ds:0x2499f64,0x0
 1d7f35b:	74 1a                	je     0x1d7f377
 1d7f35d:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
 1d7f360:	8b 0d 64 9f 49 02    	mov    ecx,DWORD PTR ds:0x2499f64
 1d7f366:	89 08                	mov    DWORD PTR [eax],ecx
 1d7f368:	c7 05 64 9f 49 02 00 	mov    DWORD PTR ds:0x2499f64,0x0
 1d7f36f:	00 00 00 
 1d7f372:	e8 4f 4f fc ff       	call   0x1d442c6
 1d7f377:	d9 05 94 c9 eb 01    	fld    DWORD PTR ds:0x1ebc994
 1d7f37d:	d8 1d 84 c3 e8 01    	fcomp  DWORD PTR ds:0x1e8c384
 1d7f383:	df e0                	fnstsw ax
 1d7f385:	f6 c4 40             	test   ah,0x40
 1d7f388:	0f 85 c7 00 00 00    	jne    0x1d7f455
 1d7f38e:	dd 45 f0             	fld    QWORD PTR [ebp-0x10]
 1d7f391:	dc 65 f8             	fsub   QWORD PTR [ebp-0x8]
 1d7f394:	dc 05 d8 9d 3c 02    	fadd   QWORD PTR ds:0x23c9dd8
 1d7f39a:	dd 1d d8 9d 3c 02    	fstp   QWORD PTR ds:0x23c9dd8
 1d7f3a0:	8b 15 d4 9d 3c 02    	mov    edx,DWORD PTR ds:0x23c9dd4
 1d7f3a6:	83 c2 01             	add    edx,0x1
 1d7f3a9:	89 15 d4 9d 3c 02    	mov    DWORD PTR ds:0x23c9dd4,edx
 1d7f3af:	81 3d d4 9d 3c 02 e8 	cmp    DWORD PTR ds:0x23c9dd4,0x3e8
 1d7f3b6:	03 00 00 
 1d7f3b9:	7d 0a                	jge    0x1d7f3c5
 1d7f3bb:	a1 88 d9 50 02       	mov    eax,ds:0x250d988
 1d7f3c0:	e9 95 00 00 00       	jmp    0x1d7f45a
 1d7f3c5:	dd 05 d8 9d 3c 02    	fld    QWORD PTR ds:0x23c9dd8
 1d7f3cb:	dc 0d 28 cb e8 01    	fmul   QWORD PTR ds:0x1e8cb28
 1d7f3d1:	da 35 d4 9d 3c 02    	fidiv  DWORD PTR ds:0x23c9dd4
 1d7f3d7:	e8 60 22 0f 00       	call   0x1e7163c
 1d7f3dc:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
 1d7f3df:	c7 05 d4 9d 3c 02 00 	mov    DWORD PTR ds:0x23c9dd4,0x0
 1d7f3e6:	00 00 00 
 1d7f3e9:	c7 05 d8 9d 3c 02 00 	mov    DWORD PTR ds:0x23c9dd8,0x0
 1d7f3f0:	00 00 00 
 1d7f3f3:	c7 05 dc 9d 3c 02 00 	mov    DWORD PTR ds:0x23c9ddc,0x0
 1d7f3fa:	00 00 00 
 1d7f3fd:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
 1d7f404:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
 1d7f40b:	eb 09                	jmp    0x1d7f416
 1d7f40d:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
 1d7f410:	83 c0 01             	add    eax,0x1
 1d7f413:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
 1d7f416:	8b 4d e8             	mov    ecx,DWORD PTR [ebp-0x18]
 1d7f419:	3b 0d 28 f3 51 02    	cmp    ecx,DWORD PTR ds:0x251f328
 1d7f41f:	7d 1f                	jge    0x1d7f440
 1d7f421:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
 1d7f424:	69 d2 18 50 00 00    	imul   edx,edx,0x5018
 1d7f42a:	a1 24 f3 51 02       	mov    eax,ds:0x251f324
 1d7f42f:	83 3c 10 00          	cmp    DWORD PTR [eax+edx*1],0x0
 1d7f433:	74 09                	je     0x1d7f43e
 1d7f435:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
 1d7f438:	83 c1 01             	add    ecx,0x1
 1d7f43b:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
 1d7f43e:	eb cd                	jmp    0x1d7f40d
 1d7f440:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
 1d7f443:	52                   	push   edx
 1d7f444:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
 1d7f447:	50                   	push   eax
 1d7f448:	68 c0 cf eb 01       	push   0x1ebcfc0
 1d7f44d:	e8 47 b6 fc ff       	call   0x1d4aa99
 1d7f452:	83 c4 0c             	add    esp,0xc
 1d7f455:	a1 88 d9 50 02       	mov    eax,ds:0x250d988
 1d7f45a:	8b e5                	mov    esp,ebp
 1d7f45c:	5d                   	pop    ebp
 1d7f45d:	c3                   	ret
