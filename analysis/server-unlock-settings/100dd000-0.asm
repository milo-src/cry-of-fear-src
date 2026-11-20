
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dd000 <.text+0xdc000>:
100dd000:	55                   	push   ebp
100dd001:	8b ec                	mov    ebp,esp
100dd003:	6a ff                	push   0xffffffff
100dd005:	68 1d df 19 10       	push   0x1019df1d
100dd00a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100dd010:	50                   	push   eax
100dd011:	83 ec 28             	sub    esp,0x28
100dd014:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100dd019:	33 c5                	xor    eax,ebp
100dd01b:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100dd01e:	53                   	push   ebx
100dd01f:	56                   	push   esi
100dd020:	57                   	push   edi
100dd021:	50                   	push   eax
100dd022:	8d 45 f4             	lea    eax,[ebp-0xc]
100dd025:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100dd02b:	8d 45 cc             	lea    eax,[ebp-0x34]
100dd02e:	50                   	push   eax
100dd02f:	68 d4 cc 1d 10       	push   0x101dccd4
100dd034:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100dd03a:	8b d8                	mov    ebx,eax
100dd03c:	83 c4 08             	add    esp,0x8
100dd03f:	85 db                	test   ebx,ebx
100dd041:	75 18                	jne    0x100dd05b
100dd043:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100dd046:	68 e8 cc 1d 10       	push   0x101dcce8
100dd04b:	6a 01                	push   0x1
100dd04d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100dd053:	83 c4 0c             	add    esp,0xc
100dd056:	e9 c9 02 00 00       	jmp    0x100dd324
100dd05b:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
100dd062:	c7 45 ec 0f 00 00 00 	mov    DWORD PTR [ebp-0x14],0xf
100dd069:	c6 45 d8 00          	mov    BYTE PTR [ebp-0x28],0x0
100dd06d:	33 c0                	xor    eax,eax
100dd06f:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100dd076:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
100dd079:	38 45 0c             	cmp    BYTE PTR [ebp+0xc],al
100dd07c:	75 05                	jne    0x100dd083
100dd07e:	38 45 10             	cmp    BYTE PTR [ebp+0x10],al
100dd081:	74 08                	je     0x100dd08b
100dd083:	b8 9a 02 00 00       	mov    eax,0x29a
100dd088:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
100dd08b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100dd08e:	81 ff 00 80 00 00    	cmp    edi,0x8000
100dd094:	0f 8f 61 01 00 00    	jg     0x100dd1fb
100dd09a:	0f 84 4f 01 00 00    	je     0x100dd1ef
100dd0a0:	81 ff 80 00 00 00    	cmp    edi,0x80
100dd0a6:	0f 8f ad 00 00 00    	jg     0x100dd159
100dd0ac:	0f 84 9b 00 00 00    	je     0x100dd14d
100dd0b2:	83 ff 08             	cmp    edi,0x8
100dd0b5:	7f 5f                	jg     0x100dd116
100dd0b7:	74 51                	je     0x100dd10a
100dd0b9:	83 ff 02             	cmp    edi,0x2
100dd0bc:	7f 37                	jg     0x100dd0f5
100dd0be:	74 29                	je     0x100dd0e9
100dd0c0:	81 ff 00 00 00 80    	cmp    edi,0x80000000
100dd0c6:	74 15                	je     0x100dd0dd
100dd0c8:	83 ff 01             	cmp    edi,0x1
100dd0cb:	0f 85 45 02 00 00    	jne    0x100dd316
100dd0d1:	c7 45 d4 0f 00 00 00 	mov    DWORD PTR [ebp-0x2c],0xf
100dd0d8:	e9 77 02 00 00       	jmp    0x100dd354
100dd0dd:	c7 45 d4 52 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x52
100dd0e4:	e9 6b 02 00 00       	jmp    0x100dd354
100dd0e9:	c7 45 d4 07 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x7
100dd0f0:	e9 5f 02 00 00       	jmp    0x100dd354
100dd0f5:	83 ff 04             	cmp    edi,0x4
100dd0f8:	0f 85 18 02 00 00    	jne    0x100dd316
100dd0fe:	c7 45 d4 2d 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x2d
100dd105:	e9 4a 02 00 00       	jmp    0x100dd354
100dd10a:	c7 45 d4 16 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x16
100dd111:	e9 3e 02 00 00       	jmp    0x100dd354
100dd116:	83 ff 10             	cmp    edi,0x10
100dd119:	74 26                	je     0x100dd141
100dd11b:	83 ff 20             	cmp    edi,0x20
100dd11e:	74 15                	je     0x100dd135
100dd120:	83 ff 40             	cmp    edi,0x40
100dd123:	0f 85 ed 01 00 00    	jne    0x100dd316
100dd129:	c7 45 d4 27 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x27
100dd130:	e9 1f 02 00 00       	jmp    0x100dd354
100dd135:	c7 45 d4 53 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x53
100dd13c:	e9 13 02 00 00       	jmp    0x100dd354
100dd141:	c7 45 d4 03 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3
100dd148:	e9 07 02 00 00       	jmp    0x100dd354
100dd14d:	c7 45 d4 33 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x33
100dd154:	e9 fb 01 00 00       	jmp    0x100dd354
100dd159:	81 ff 00 08 00 00    	cmp    edi,0x800
100dd15f:	7f 4e                	jg     0x100dd1af
100dd161:	74 40                	je     0x100dd1a3
100dd163:	81 ff 00 01 00 00    	cmp    edi,0x100
100dd169:	74 2c                	je     0x100dd197
100dd16b:	81 ff 00 02 00 00    	cmp    edi,0x200
100dd171:	74 18                	je     0x100dd18b
100dd173:	81 ff 00 04 00 00    	cmp    edi,0x400
100dd179:	0f 85 97 01 00 00    	jne    0x100dd316
100dd17f:	c7 45 d4 36 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x36
100dd186:	e9 c9 01 00 00       	jmp    0x100dd354
100dd18b:	c7 45 d4 35 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x35
100dd192:	e9 bd 01 00 00       	jmp    0x100dd354
100dd197:	c7 45 d4 34 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x34
100dd19e:	e9 b1 01 00 00       	jmp    0x100dd354
100dd1a3:	c7 45 d4 37 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x37
100dd1aa:	e9 a5 01 00 00       	jmp    0x100dd354
100dd1af:	81 ff 00 10 00 00    	cmp    edi,0x1000
100dd1b5:	74 2c                	je     0x100dd1e3
100dd1b7:	81 ff 00 20 00 00    	cmp    edi,0x2000
100dd1bd:	74 18                	je     0x100dd1d7
100dd1bf:	81 ff 00 40 00 00    	cmp    edi,0x4000
100dd1c5:	0f 85 4b 01 00 00    	jne    0x100dd316
100dd1cb:	c7 45 d4 3a 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3a
100dd1d2:	e9 7d 01 00 00       	jmp    0x100dd354
100dd1d7:	c7 45 d4 39 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x39
100dd1de:	e9 71 01 00 00       	jmp    0x100dd354
100dd1e3:	c7 45 d4 38 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x38
100dd1ea:	e9 65 01 00 00       	jmp    0x100dd354
100dd1ef:	c7 45 d4 3b 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3b
100dd1f6:	e9 59 01 00 00       	jmp    0x100dd354
100dd1fb:	81 ff 00 00 80 00    	cmp    edi,0x800000
100dd201:	0f 8f a8 00 00 00    	jg     0x100dd2af
100dd207:	0f 84 96 00 00 00    	je     0x100dd2a3
100dd20d:	81 ff 00 00 08 00    	cmp    edi,0x80000
100dd213:	7f 4e                	jg     0x100dd263
100dd215:	74 40                	je     0x100dd257
100dd217:	81 ff 00 00 01 00    	cmp    edi,0x10000
100dd21d:	74 2c                	je     0x100dd24b
100dd21f:	81 ff 00 00 02 00    	cmp    edi,0x20000
100dd225:	74 18                	je     0x100dd23f
100dd227:	81 ff 00 00 04 00    	cmp    edi,0x40000
100dd22d:	0f 85 e3 00 00 00    	jne    0x100dd316
100dd233:	c7 45 d4 3e 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3e
100dd23a:	e9 15 01 00 00       	jmp    0x100dd354
100dd23f:	c7 45 d4 3d 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3d
100dd246:	e9 09 01 00 00       	jmp    0x100dd354
100dd24b:	c7 45 d4 3c 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3c
100dd252:	e9 fd 00 00 00       	jmp    0x100dd354
100dd257:	c7 45 d4 46 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x46
100dd25e:	e9 f1 00 00 00       	jmp    0x100dd354
100dd263:	81 ff 00 00 10 00    	cmp    edi,0x100000
100dd269:	74 2c                	je     0x100dd297
100dd26b:	81 ff 00 00 20 00    	cmp    edi,0x200000
100dd271:	74 18                	je     0x100dd28b
100dd273:	81 ff 00 00 40 00    	cmp    edi,0x400000
100dd279:	0f 85 97 00 00 00    	jne    0x100dd316
100dd27f:	c7 45 d4 49 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x49
100dd286:	e9 c9 00 00 00       	jmp    0x100dd354
100dd28b:	c7 45 d4 48 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x48
100dd292:	e9 bd 00 00 00       	jmp    0x100dd354
100dd297:	c7 45 d4 47 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x47
100dd29e:	e9 b1 00 00 00       	jmp    0x100dd354
100dd2a3:	c7 45 d4 4a 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4a
100dd2aa:	e9 a5 00 00 00       	jmp    0x100dd354
100dd2af:	81 ff 00 00 00 08    	cmp    edi,0x8000000
100dd2b5:	7f 3e                	jg     0x100dd2f5
100dd2b7:	74 33                	je     0x100dd2ec
100dd2b9:	81 ff 00 00 00 01    	cmp    edi,0x1000000
100dd2bf:	74 22                	je     0x100dd2e3
100dd2c1:	81 ff 00 00 00 02    	cmp    edi,0x2000000
100dd2c7:	74 11                	je     0x100dd2da
100dd2c9:	81 ff 00 00 00 04    	cmp    edi,0x4000000
100dd2cf:	75 45                	jne    0x100dd316
100dd2d1:	c7 45 d4 4d 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4d
100dd2d8:	eb 7a                	jmp    0x100dd354
100dd2da:	c7 45 d4 4c 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4c
100dd2e1:	eb 71                	jmp    0x100dd354
100dd2e3:	c7 45 d4 4b 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4b
100dd2ea:	eb 68                	jmp    0x100dd354
100dd2ec:	c7 45 d4 4e 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4e
100dd2f3:	eb 5f                	jmp    0x100dd354
100dd2f5:	81 ff 00 00 00 10    	cmp    edi,0x10000000
100dd2fb:	74 50                	je     0x100dd34d
100dd2fd:	81 ff 00 00 00 20    	cmp    edi,0x20000000
100dd303:	74 3f                	je     0x100dd344
100dd305:	81 ff 00 00 00 40    	cmp    edi,0x40000000
100dd30b:	75 09                	jne    0x100dd316
100dd30d:	c7 45 d4 51 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x51
100dd314:	eb 3e                	jmp    0x100dd354
100dd316:	85 c0                	test   eax,eax
100dd318:	75 3a                	jne    0x100dd354
100dd31a:	53                   	push   ebx
100dd31b:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100dd321:	83 c4 04             	add    esp,0x4
100dd324:	32 c0                	xor    al,al
100dd326:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100dd329:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100dd330:	59                   	pop    ecx
100dd331:	5f                   	pop    edi
100dd332:	5e                   	pop    esi
100dd333:	5b                   	pop    ebx
100dd334:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100dd337:	33 cd                	xor    ecx,ebp
100dd339:	e8 75 08 06 00       	call   0x1013dbb3
100dd33e:	8b e5                	mov    esp,ebp
100dd340:	5d                   	pop    ebp
100dd341:	c2 0c 00             	ret    0xc
100dd344:	c7 45 d4 50 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x50
100dd34b:	eb 07                	jmp    0x100dd354
100dd34d:	c7 45 d4 4f 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4f
100dd354:	68 c8 84 1a 10       	push   0x101a84c8
100dd359:	53                   	push   ebx
100dd35a:	c7 45 d0 01 00 00 00 	mov    DWORD PTR [ebp-0x30],0x1
100dd361:	e8 99 70 09 00       	call   0x101743ff
100dd366:	8b f0                	mov    esi,eax
100dd368:	83 c4 08             	add    esp,0x8
100dd36b:	85 f6                	test   esi,esi
100dd36d:	74 ab                	je     0x100dd31a
100dd36f:	90                   	nop
100dd370:	80 7d 0c 00          	cmp    BYTE PTR [ebp+0xc],0x0
100dd374:	8b 45 d0             	mov    eax,DWORD PTR [ebp-0x30]
100dd377:	74 30                	je     0x100dd3a9
100dd379:	83 f8 2f             	cmp    eax,0x2f
100dd37c:	75 2b                	jne    0x100dd3a9
100dd37e:	68 24 cd 1d 10       	push   0x101dcd24
100dd383:	56                   	push   esi
100dd384:	e8 67 22 06 00       	call   0x1013f5f0
100dd389:	83 c4 08             	add    esp,0x8
100dd38c:	85 c0                	test   eax,eax
100dd38e:	75 8a                	jne    0x100dd31a
100dd390:	68 3c cd 1d 10       	push   0x101dcd3c
100dd395:	56                   	push   esi
100dd396:	e8 55 22 06 00       	call   0x1013f5f0
100dd39b:	83 c4 08             	add    esp,0x8
100dd39e:	85 c0                	test   eax,eax
100dd3a0:	0f 85 ad 05 00 00    	jne    0x100dd953
100dd3a6:	8b 45 d0             	mov    eax,DWORD PTR [ebp-0x30]
100dd3a9:	80 7d 10 00          	cmp    BYTE PTR [ebp+0x10],0x0
100dd3ad:	74 31                	je     0x100dd3e0
100dd3af:	83 f8 30             	cmp    eax,0x30
100dd3b2:	75 2c                	jne    0x100dd3e0
100dd3b4:	68 54 cd 1d 10       	push   0x101dcd54
100dd3b9:	56                   	push   esi
100dd3ba:	e8 31 22 06 00       	call   0x1013f5f0
100dd3bf:	83 c4 08             	add    esp,0x8
100dd3c2:	85 c0                	test   eax,eax
100dd3c4:	0f 85 50 ff ff ff    	jne    0x100dd31a
100dd3ca:	68 6c cd 1d 10       	push   0x101dcd6c
100dd3cf:	56                   	push   esi
100dd3d0:	e8 1b 22 06 00       	call   0x1013f5f0
100dd3d5:	83 c4 08             	add    esp,0x8
100dd3d8:	85 c0                	test   eax,eax
100dd3da:	0f 85 73 05 00 00    	jne    0x100dd953
100dd3e0:	8b 45 d0             	mov    eax,DWORD PTR [ebp-0x30]
100dd3e3:	3b 45 d4             	cmp    eax,DWORD PTR [ebp-0x2c]
100dd3e6:	0f 85 46 05 00 00    	jne    0x100dd932
100dd3ec:	81 ff 00 80 00 00    	cmp    edi,0x8000
100dd3f2:	0f 8f c1 02 00 00    	jg     0x100dd6b9
100dd3f8:	0f 84 9b 02 00 00    	je     0x100dd699
100dd3fe:	81 ff 80 00 00 00    	cmp    edi,0x80
100dd404:	0f 8f 69 01 00 00    	jg     0x100dd573
100dd40a:	0f 84 43 01 00 00    	je     0x100dd553
100dd410:	83 ff 08             	cmp    edi,0x8
100dd413:	0f 8f c7 00 00 00    	jg     0x100dd4e0
100dd419:	0f 84 a1 00 00 00    	je     0x100dd4c0
100dd41f:	83 ff 02             	cmp    edi,0x2
100dd422:	7f 73                	jg     0x100dd497
100dd424:	74 51                	je     0x100dd477
100dd426:	81 ff 00 00 00 80    	cmp    edi,0x80000000
100dd42c:	74 29                	je     0x100dd457
100dd42e:	83 ff 01             	cmp    edi,0x1
100dd431:	0f 85 fb 04 00 00    	jne    0x100dd932
100dd437:	68 84 cd 1d 10       	push   0x101dcd84
100dd43c:	56                   	push   esi
100dd43d:	e8 ae 21 06 00       	call   0x1013f5f0
100dd442:	83 c4 08             	add    esp,0x8
100dd445:	85 c0                	test   eax,eax
100dd447:	0f 85 cd fe ff ff    	jne    0x100dd31a
100dd44d:	68 9c cd 1d 10       	push   0x101dcd9c
100dd452:	e9 ce 04 00 00       	jmp    0x100dd925
100dd457:	68 24 d3 1d 10       	push   0x101dd324
100dd45c:	56                   	push   esi
100dd45d:	e8 8e 21 06 00       	call   0x1013f5f0
100dd462:	83 c4 08             	add    esp,0x8
100dd465:	85 c0                	test   eax,eax
100dd467:	0f 85 ad fe ff ff    	jne    0x100dd31a
100dd46d:	68 3c d3 1d 10       	push   0x101dd33c
100dd472:	e9 ae 04 00 00       	jmp    0x100dd925
100dd477:	68 b4 cd 1d 10       	push   0x101dcdb4
100dd47c:	56                   	push   esi
100dd47d:	e8 6e 21 06 00       	call   0x1013f5f0
100dd482:	83 c4 08             	add    esp,0x8
100dd485:	85 c0                	test   eax,eax
100dd487:	0f 85 8d fe ff ff    	jne    0x100dd31a
100dd48d:	68 cc cd 1d 10       	push   0x101dcdcc
100dd492:	e9 8e 04 00 00       	jmp    0x100dd925
100dd497:	83 ff 04             	cmp    edi,0x4
100dd49a:	0f 85 92 04 00 00    	jne    0x100dd932
100dd4a0:	68 e4 cd 1d 10       	push   0x101dcde4
100dd4a5:	56                   	push   esi
100dd4a6:	e8 45 21 06 00       	call   0x1013f5f0
100dd4ab:	83 c4 08             	add    esp,0x8
100dd4ae:	85 c0                	test   eax,eax
100dd4b0:	0f 85 64 fe ff ff    	jne    0x100dd31a
100dd4b6:	68 fc cd 1d 10       	push   0x101dcdfc
100dd4bb:	e9 65 04 00 00       	jmp    0x100dd925
100dd4c0:	68 14 ce 1d 10       	push   0x101dce14
100dd4c5:	56                   	push   esi
100dd4c6:	e8 25 21 06 00       	call   0x1013f5f0
100dd4cb:	83 c4 08             	add    esp,0x8
100dd4ce:	85 c0                	test   eax,eax
100dd4d0:	0f 85 44 fe ff ff    	jne    0x100dd31a
100dd4d6:	68 2c ce 1d 10       	push   0x101dce2c
100dd4db:	e9 45 04 00 00       	jmp    0x100dd925
100dd4e0:	83 ff 10             	cmp    edi,0x10
100dd4e3:	74 4e                	je     0x100dd533
100dd4e5:	83 ff 20             	cmp    edi,0x20
100dd4e8:	74 29                	je     0x100dd513
100dd4ea:	83 ff 40             	cmp    edi,0x40
100dd4ed:	0f 85 3f 04 00 00    	jne    0x100dd932
100dd4f3:	68 74 ce 1d 10       	push   0x101dce74
100dd4f8:	56                   	push   esi
100dd4f9:	e8 f2 20 06 00       	call   0x1013f5f0
100dd4fe:	83 c4 08             	add    esp,0x8
100dd501:	85 c0                	test   eax,eax
100dd503:	0f 85 11 fe ff ff    	jne    0x100dd31a
100dd509:	68 8c ce 1d 10       	push   0x101dce8c
100dd50e:	e9 12 04 00 00       	jmp    0x100dd925
100dd513:	68 54 d3 1d 10       	push   0x101dd354
100dd518:	56                   	push   esi
100dd519:	e8 d2 20 06 00       	call   0x1013f5f0
100dd51e:	83 c4 08             	add    esp,0x8
100dd521:	85 c0                	test   eax,eax
100dd523:	0f 85 f1 fd ff ff    	jne    0x100dd31a
100dd529:	68 6c d3 1d 10       	push   0x101dd36c
100dd52e:	e9 f2 03 00 00       	jmp    0x100dd925
100dd533:	68 44 ce 1d 10       	push   0x101dce44
100dd538:	56                   	push   esi
100dd539:	e8 b2 20 06 00       	call   0x1013f5f0
100dd53e:	83 c4 08             	add    esp,0x8
100dd541:	85 c0                	test   eax,eax
100dd543:	0f 85 d1 fd ff ff    	jne    0x100dd31a
100dd549:	68 5c ce 1d 10       	push   0x101dce5c
100dd54e:	e9 d2 03 00 00       	jmp    0x100dd925
100dd553:	68 a4 ce 1d 10       	push   0x101dcea4
100dd558:	56                   	push   esi
100dd559:	e8 92 20 06 00       	call   0x1013f5f0
100dd55e:	83 c4 08             	add    esp,0x8
100dd561:	85 c0                	test   eax,eax
100dd563:	0f 85 b1 fd ff ff    	jne    0x100dd31a
100dd569:	68 bc ce 1d 10       	push   0x101dcebc
100dd56e:	e9 b2 03 00 00       	jmp    0x100dd925
100dd573:	81 ff 00 08 00 00    	cmp    edi,0x800
100dd579:	0f 8f 9e 00 00 00    	jg     0x100dd61d
100dd57f:	74 7c                	je     0x100dd5fd
100dd581:	81 ff 00 01 00 00    	cmp    edi,0x100
100dd587:	74 54                	je     0x100dd5dd
100dd589:	81 ff 00 02 00 00    	cmp    edi,0x200
100dd58f:	74 2c                	je     0x100dd5bd
100dd591:	81 ff 00 04 00 00    	cmp    edi,0x400
100dd597:	0f 85 95 03 00 00    	jne    0x100dd932
100dd59d:	68 34 cf 1d 10       	push   0x101dcf34
100dd5a2:	56                   	push   esi
100dd5a3:	e8 48 20 06 00       	call   0x1013f5f0
100dd5a8:	83 c4 08             	add    esp,0x8
100dd5ab:	85 c0                	test   eax,eax
100dd5ad:	0f 85 67 fd ff ff    	jne    0x100dd31a
100dd5b3:	68 4c cf 1d 10       	push   0x101dcf4c
100dd5b8:	e9 68 03 00 00       	jmp    0x100dd925
100dd5bd:	68 04 cf 1d 10       	push   0x101dcf04
100dd5c2:	56                   	push   esi
100dd5c3:	e8 28 20 06 00       	call   0x1013f5f0
100dd5c8:	83 c4 08             	add    esp,0x8
100dd5cb:	85 c0                	test   eax,eax
100dd5cd:	0f 85 47 fd ff ff    	jne    0x100dd31a
100dd5d3:	68 1c cf 1d 10       	push   0x101dcf1c
100dd5d8:	e9 48 03 00 00       	jmp    0x100dd925
100dd5dd:	68 d4 ce 1d 10       	push   0x101dced4
100dd5e2:	56                   	push   esi
100dd5e3:	e8 08 20 06 00       	call   0x1013f5f0
100dd5e8:	83 c4 08             	add    esp,0x8
100dd5eb:	85 c0                	test   eax,eax
100dd5ed:	0f 85 27 fd ff ff    	jne    0x100dd31a
100dd5f3:	68 ec ce 1d 10       	push   0x101dceec
100dd5f8:	e9 28 03 00 00       	jmp    0x100dd925
100dd5fd:	68 64 cf 1d 10       	push   0x101dcf64
100dd602:	56                   	push   esi
100dd603:	e8 e8 1f 06 00       	call   0x1013f5f0
100dd608:	83 c4 08             	add    esp,0x8
100dd60b:	85 c0                	test   eax,eax
100dd60d:	0f 85 07 fd ff ff    	jne    0x100dd31a
100dd613:	68 7c cf 1d 10       	push   0x101dcf7c
100dd618:	e9 08 03 00 00       	jmp    0x100dd925
100dd61d:	81 ff 00 10 00 00    	cmp    edi,0x1000
100dd623:	74 54                	je     0x100dd679
100dd625:	81 ff 00 20 00 00    	cmp    edi,0x2000
100dd62b:	74 2c                	je     0x100dd659
100dd62d:	81 ff 00 40 00 00    	cmp    edi,0x4000
100dd633:	0f 85 f9 02 00 00    	jne    0x100dd932
100dd639:	68 f4 cf 1d 10       	push   0x101dcff4
100dd63e:	56                   	push   esi
100dd63f:	e8 ac 1f 06 00       	call   0x1013f5f0
100dd644:	83 c4 08             	add    esp,0x8
100dd647:	85 c0                	test   eax,eax
100dd649:	0f 85 cb fc ff ff    	jne    0x100dd31a
100dd64f:	68 0c d0 1d 10       	push   0x101dd00c
100dd654:	e9 cc 02 00 00       	jmp    0x100dd925
100dd659:	68 c4 cf 1d 10       	push   0x101dcfc4
100dd65e:	56                   	push   esi
100dd65f:	e8 8c 1f 06 00       	call   0x1013f5f0
100dd664:	83 c4 08             	add    esp,0x8
100dd667:	85 c0                	test   eax,eax
100dd669:	0f 85 ab fc ff ff    	jne    0x100dd31a
100dd66f:	68 dc cf 1d 10       	push   0x101dcfdc
100dd674:	e9 ac 02 00 00       	jmp    0x100dd925
100dd679:	68 94 cf 1d 10       	push   0x101dcf94
100dd67e:	56                   	push   esi
100dd67f:	e8 6c 1f 06 00       	call   0x1013f5f0
100dd684:	83 c4 08             	add    esp,0x8
100dd687:	85 c0                	test   eax,eax
100dd689:	0f 85 8b fc ff ff    	jne    0x100dd31a
100dd68f:	68 ac cf 1d 10       	push   0x101dcfac
100dd694:	e9 8c 02 00 00       	jmp    0x100dd925
100dd699:	68 24 d0 1d 10       	push   0x101dd024
100dd69e:	56                   	push   esi
100dd69f:	e8 4c 1f 06 00       	call   0x1013f5f0
100dd6a4:	83 c4 08             	add    esp,0x8
100dd6a7:	85 c0                	test   eax,eax
100dd6a9:	0f 85 6b fc ff ff    	jne    0x100dd31a
100dd6af:	68 3c d0 1d 10       	push   0x101dd03c
100dd6b4:	e9 6c 02 00 00       	jmp    0x100dd925
100dd6b9:	81 ff 00 00 80 00    	cmp    edi,0x800000
100dd6bf:	0f 8f 4c 01 00 00    	jg     0x100dd811
100dd6c5:	0f 84 26 01 00 00    	je     0x100dd7f1
100dd6cb:	81 ff 00 00 08 00    	cmp    edi,0x80000
100dd6d1:	0f 8f 9e 00 00 00    	jg     0x100dd775
100dd6d7:	74 7c                	je     0x100dd755
100dd6d9:	81 ff 00 00 01 00    	cmp    edi,0x10000
100dd6df:	74 54                	je     0x100dd735
100dd6e1:	81 ff 00 00 02 00    	cmp    edi,0x20000
100dd6e7:	74 2c                	je     0x100dd715
100dd6e9:	81 ff 00 00 04 00    	cmp    edi,0x40000
100dd6ef:	0f 85 3d 02 00 00    	jne    0x100dd932
100dd6f5:	68 b4 d0 1d 10       	push   0x101dd0b4
100dd6fa:	56                   	push   esi
100dd6fb:	e8 f0 1e 06 00       	call   0x1013f5f0
100dd700:	83 c4 08             	add    esp,0x8
100dd703:	85 c0                	test   eax,eax
100dd705:	0f 85 0f fc ff ff    	jne    0x100dd31a
100dd70b:	68 cc d0 1d 10       	push   0x101dd0cc
100dd710:	e9 10 02 00 00       	jmp    0x100dd925
100dd715:	68 84 d0 1d 10       	push   0x101dd084
100dd71a:	56                   	push   esi
100dd71b:	e8 d0 1e 06 00       	call   0x1013f5f0
100dd720:	83 c4 08             	add    esp,0x8
100dd723:	85 c0                	test   eax,eax
100dd725:	0f 85 ef fb ff ff    	jne    0x100dd31a
100dd72b:	68 9c d0 1d 10       	push   0x101dd09c
100dd730:	e9 f0 01 00 00       	jmp    0x100dd925
100dd735:	68 54 d0 1d 10       	push   0x101dd054
100dd73a:	56                   	push   esi
100dd73b:	e8 b0 1e 06 00       	call   0x1013f5f0
100dd740:	83 c4 08             	add    esp,0x8
100dd743:	85 c0                	test   eax,eax
100dd745:	0f 85 cf fb ff ff    	jne    0x100dd31a
100dd74b:	68 6c d0 1d 10       	push   0x101dd06c
100dd750:	e9 d0 01 00 00       	jmp    0x100dd925
100dd755:	68 e4 d0 1d 10       	push   0x101dd0e4
100dd75a:	56                   	push   esi
100dd75b:	e8 90 1e 06 00       	call   0x1013f5f0
100dd760:	83 c4 08             	add    esp,0x8
100dd763:	85 c0                	test   eax,eax
100dd765:	0f 85 af fb ff ff    	jne    0x100dd31a
100dd76b:	68 fc d0 1d 10       	push   0x101dd0fc
100dd770:	e9 b0 01 00 00       	jmp    0x100dd925
100dd775:	81 ff 00 00 10 00    	cmp    edi,0x100000
100dd77b:	74 54                	je     0x100dd7d1
100dd77d:	81 ff 00 00 20 00    	cmp    edi,0x200000
100dd783:	74 2c                	je     0x100dd7b1
100dd785:	81 ff 00 00 40 00    	cmp    edi,0x400000
100dd78b:	0f 85 a1 01 00 00    	jne    0x100dd932
100dd791:	68 74 d1 1d 10       	push   0x101dd174
100dd796:	56                   	push   esi
100dd797:	e8 54 1e 06 00       	call   0x1013f5f0
100dd79c:	83 c4 08             	add    esp,0x8
100dd79f:	85 c0                	test   eax,eax
100dd7a1:	0f 85 73 fb ff ff    	jne    0x100dd31a
100dd7a7:	68 8c d1 1d 10       	push   0x101dd18c
100dd7ac:	e9 74 01 00 00       	jmp    0x100dd925
100dd7b1:	68 44 d1 1d 10       	push   0x101dd144
100dd7b6:	56                   	push   esi
100dd7b7:	e8 34 1e 06 00       	call   0x1013f5f0
100dd7bc:	83 c4 08             	add    esp,0x8
100dd7bf:	85 c0                	test   eax,eax
100dd7c1:	0f 85 53 fb ff ff    	jne    0x100dd31a
100dd7c7:	68 5c d1 1d 10       	push   0x101dd15c
100dd7cc:	e9 54 01 00 00       	jmp    0x100dd925
100dd7d1:	68 14 d1 1d 10       	push   0x101dd114
100dd7d6:	56                   	push   esi
100dd7d7:	e8 14 1e 06 00       	call   0x1013f5f0
100dd7dc:	83 c4 08             	add    esp,0x8
100dd7df:	85 c0                	test   eax,eax
100dd7e1:	0f 85 33 fb ff ff    	jne    0x100dd31a
100dd7e7:	68 2c d1 1d 10       	push   0x101dd12c
100dd7ec:	e9 34 01 00 00       	jmp    0x100dd925
100dd7f1:	68 a4 d1 1d 10       	push   0x101dd1a4
100dd7f6:	56                   	push   esi
100dd7f7:	e8 f4 1d 06 00       	call   0x1013f5f0
100dd7fc:	83 c4 08             	add    esp,0x8
100dd7ff:	85 c0                	test   eax,eax
100dd801:	0f 85 13 fb ff ff    	jne    0x100dd31a
100dd807:	68 bc d1 1d 10       	push   0x101dd1bc
100dd80c:	e9 14 01 00 00       	jmp    0x100dd925
100dd811:	81 ff 00 00 00 08    	cmp    edi,0x8000000
100dd817:	0f 8f 9b 00 00 00    	jg     0x100dd8b8
100dd81d:	74 7c                	je     0x100dd89b
100dd81f:	81 ff 00 00 00 01    	cmp    edi,0x1000000
100dd825:	74 54                	je     0x100dd87b
100dd827:	81 ff 00 00 00 02    	cmp    edi,0x2000000
100dd82d:	74 2c                	je     0x100dd85b
100dd82f:	81 ff 00 00 00 04    	cmp    edi,0x4000000
100dd835:	0f 85 f7 00 00 00    	jne    0x100dd932
100dd83b:	68 34 d2 1d 10       	push   0x101dd234
100dd840:	56                   	push   esi
100dd841:	e8 aa 1d 06 00       	call   0x1013f5f0
100dd846:	83 c4 08             	add    esp,0x8
100dd849:	85 c0                	test   eax,eax
100dd84b:	0f 85 c9 fa ff ff    	jne    0x100dd31a
100dd851:	68 4c d2 1d 10       	push   0x101dd24c
100dd856:	e9 ca 00 00 00       	jmp    0x100dd925
100dd85b:	68 04 d2 1d 10       	push   0x101dd204
100dd860:	56                   	push   esi
100dd861:	e8 8a 1d 06 00       	call   0x1013f5f0
100dd866:	83 c4 08             	add    esp,0x8
100dd869:	85 c0                	test   eax,eax
100dd86b:	0f 85 a9 fa ff ff    	jne    0x100dd31a
100dd871:	68 1c d2 1d 10       	push   0x101dd21c
100dd876:	e9 aa 00 00 00       	jmp    0x100dd925
100dd87b:	68 d4 d1 1d 10       	push   0x101dd1d4
100dd880:	56                   	push   esi
100dd881:	e8 6a 1d 06 00       	call   0x1013f5f0
100dd886:	83 c4 08             	add    esp,0x8
100dd889:	85 c0                	test   eax,eax
100dd88b:	0f 85 89 fa ff ff    	jne    0x100dd31a
100dd891:	68 ec d1 1d 10       	push   0x101dd1ec
100dd896:	e9 8a 00 00 00       	jmp    0x100dd925
100dd89b:	68 64 d2 1d 10       	push   0x101dd264
100dd8a0:	56                   	push   esi
100dd8a1:	e8 4a 1d 06 00       	call   0x1013f5f0
100dd8a6:	83 c4 08             	add    esp,0x8
100dd8a9:	85 c0                	test   eax,eax
100dd8ab:	0f 85 69 fa ff ff    	jne    0x100dd31a
100dd8b1:	68 7c d2 1d 10       	push   0x101dd27c
100dd8b6:	eb 6d                	jmp    0x100dd925
100dd8b8:	81 ff 00 00 00 10    	cmp    edi,0x10000000
100dd8be:	74 4a                	je     0x100dd90a
100dd8c0:	81 ff 00 00 00 20    	cmp    edi,0x20000000
100dd8c6:	74 25                	je     0x100dd8ed
100dd8c8:	81 ff 00 00 00 40    	cmp    edi,0x40000000
100dd8ce:	75 62                	jne    0x100dd932
100dd8d0:	68 f4 d2 1d 10       	push   0x101dd2f4
100dd8d5:	56                   	push   esi
100dd8d6:	e8 15 1d 06 00       	call   0x1013f5f0
100dd8db:	83 c4 08             	add    esp,0x8
100dd8de:	85 c0                	test   eax,eax
100dd8e0:	0f 85 34 fa ff ff    	jne    0x100dd31a
100dd8e6:	68 0c d3 1d 10       	push   0x101dd30c
100dd8eb:	eb 38                	jmp    0x100dd925
100dd8ed:	68 c4 d2 1d 10       	push   0x101dd2c4
100dd8f2:	56                   	push   esi
100dd8f3:	e8 f8 1c 06 00       	call   0x1013f5f0
100dd8f8:	83 c4 08             	add    esp,0x8
100dd8fb:	85 c0                	test   eax,eax
100dd8fd:	0f 85 17 fa ff ff    	jne    0x100dd31a
100dd903:	68 dc d2 1d 10       	push   0x101dd2dc
100dd908:	eb 1b                	jmp    0x100dd925
100dd90a:	68 94 d2 1d 10       	push   0x101dd294
100dd90f:	56                   	push   esi
100dd910:	e8 db 1c 06 00       	call   0x1013f5f0
100dd915:	83 c4 08             	add    esp,0x8
100dd918:	85 c0                	test   eax,eax
100dd91a:	0f 85 fa f9 ff ff    	jne    0x100dd31a
100dd920:	68 ac d2 1d 10       	push   0x101dd2ac
100dd925:	56                   	push   esi
100dd926:	e8 c5 1c 06 00       	call   0x1013f5f0
100dd92b:	83 c4 08             	add    esp,0x8
100dd92e:	85 c0                	test   eax,eax
100dd930:	75 21                	jne    0x100dd953
100dd932:	ff 45 d0             	inc    DWORD PTR [ebp-0x30]
100dd935:	68 c8 84 1a 10       	push   0x101a84c8
100dd93a:	6a 00                	push   0x0
100dd93c:	e8 be 6a 09 00       	call   0x101743ff
100dd941:	8b f0                	mov    esi,eax
100dd943:	83 c4 08             	add    esp,0x8
100dd946:	85 f6                	test   esi,esi
100dd948:	0f 85 22 fa ff ff    	jne    0x100dd370
100dd94e:	e9 c7 f9 ff ff       	jmp    0x100dd31a
100dd953:	53                   	push   ebx
100dd954:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100dd95a:	83 c4 04             	add    esp,0x4
100dd95d:	b0 01                	mov    al,0x1
100dd95f:	e9 c2 f9 ff ff       	jmp    0x100dd326
