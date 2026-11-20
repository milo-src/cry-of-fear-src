
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f2ed0 <.text+0xf1ed0>:
100f2ed0:	55                   	push   ebp
100f2ed1:	8b ec                	mov    ebp,esp
100f2ed3:	6a ff                	push   0xffffffff
100f2ed5:	68 61 e0 19 10       	push   0x1019e061
100f2eda:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100f2ee0:	50                   	push   eax
100f2ee1:	81 ec a0 04 00 00    	sub    esp,0x4a0
100f2ee7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100f2eec:	33 c5                	xor    eax,ebp
100f2eee:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100f2ef1:	53                   	push   ebx
100f2ef2:	56                   	push   esi
100f2ef3:	57                   	push   edi
100f2ef4:	50                   	push   eax
100f2ef5:	8d 45 f4             	lea    eax,[ebp-0xc]
100f2ef8:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100f2efe:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100f2f04:	50                   	push   eax
100f2f05:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100f2f0b:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
100f2f11:	83 c4 04             	add    esp,0x4
100f2f14:	49                   	dec    ecx
100f2f15:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100f2f18:	8d 49 01             	lea    ecx,[ecx+0x1]
100f2f1b:	84 c0                	test   al,al
100f2f1d:	75 f6                	jne    0x100f2f15
100f2f1f:	a1 84 d3 1d 10       	mov    eax,ds:0x101dd384
100f2f24:	89 01                	mov    DWORD PTR [ecx],eax
100f2f26:	a1 88 d3 1d 10       	mov    eax,ds:0x101dd388
100f2f2b:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100f2f2e:	a1 8c d3 1d 10       	mov    eax,ds:0x101dd38c
100f2f33:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100f2f36:	a1 90 d3 1d 10       	mov    eax,ds:0x101dd390
100f2f3b:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
100f2f3e:	a1 94 d3 1d 10       	mov    eax,ds:0x101dd394
100f2f43:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100f2f46:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
100f2f4c:	50                   	push   eax
100f2f4d:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100f2f53:	8d 8d f0 fc ff ff    	lea    ecx,[ebp-0x310]
100f2f59:	83 c4 04             	add    esp,0x4
100f2f5c:	49                   	dec    ecx
100f2f5d:	0f 1f 00             	nop    DWORD PTR [eax]
100f2f60:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100f2f63:	8d 49 01             	lea    ecx,[ecx+0x1]
100f2f66:	84 c0                	test   al,al
100f2f68:	75 f6                	jne    0x100f2f60
100f2f6a:	a1 98 d3 1d 10       	mov    eax,ds:0x101dd398
100f2f6f:	89 01                	mov    DWORD PTR [ecx],eax
100f2f71:	a1 9c d3 1d 10       	mov    eax,ds:0x101dd39c
100f2f76:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100f2f79:	a0 a0 d3 1d 10       	mov    al,ds:0x101dd3a0
100f2f7e:	6a 01                	push   0x1
100f2f80:	6a 40                	push   0x40
100f2f82:	88 41 08             	mov    BYTE PTR [ecx+0x8],al
100f2f85:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100f2f8b:	6a 01                	push   0x1
100f2f8d:	50                   	push   eax
100f2f8e:	8d 8d 54 fb ff ff    	lea    ecx,[ebp-0x4ac]
100f2f94:	e8 37 c9 f3 ff       	call   0x1002f8d0
100f2f99:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100f2fa0:	c7 85 e8 fc ff ff 00 	mov    DWORD PTR [ebp-0x318],0x0
100f2fa7:	00 00 00 
100f2faa:	c7 85 ec fc ff ff 0f 	mov    DWORD PTR [ebp-0x314],0xf
100f2fb1:	00 00 00 
100f2fb4:	c6 85 d8 fc ff ff 00 	mov    BYTE PTR [ebp-0x328],0x0
100f2fbb:	6a 01                	push   0x1
100f2fbd:	6a 40                	push   0x40
100f2fbf:	6a 02                	push   0x2
100f2fc1:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
100f2fc7:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
100f2fcb:	50                   	push   eax
100f2fcc:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100f2fd2:	e8 89 6b f5 ff       	call   0x10049b60
100f2fd7:	c7 85 d0 fc ff ff 00 	mov    DWORD PTR [ebp-0x330],0x0
100f2fde:	00 00 00 
100f2fe1:	c7 85 d4 fc ff ff 0f 	mov    DWORD PTR [ebp-0x32c],0xf
100f2fe8:	00 00 00 
100f2feb:	c6 85 c0 fc ff ff 00 	mov    BYTE PTR [ebp-0x340],0x0
100f2ff2:	8b 85 54 fb ff ff    	mov    eax,DWORD PTR [ebp-0x4ac]
100f2ff8:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
100f2ffc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f2fff:	f6 84 05 60 fb ff ff 	test   BYTE PTR [ebp+eax*1-0x4a0],0x6
100f3006:	06 
100f3007:	0f 85 78 02 00 00    	jne    0x100f3285
100f300d:	8b 85 0c fc ff ff    	mov    eax,DWORD PTR [ebp-0x3f4]
100f3013:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f3016:	f6 84 05 18 fc ff ff 	test   BYTE PTR [ebp+eax*1-0x3e8],0x6
100f301d:	06 
100f301e:	0f 85 61 02 00 00    	jne    0x100f3285
100f3024:	8a 7d 14             	mov    bh,BYTE PTR [ebp+0x14]
100f3027:	33 ff                	xor    edi,edi
100f3029:	80 7d 10 00          	cmp    BYTE PTR [ebp+0x10],0x0
100f302d:	75 04                	jne    0x100f3033
100f302f:	84 ff                	test   bh,bh
100f3031:	74 05                	je     0x100f3038
100f3033:	bf 9a 02 00 00       	mov    edi,0x29a
100f3038:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100f303b:	81 fe 00 80 00 00    	cmp    esi,0x8000
100f3041:	0f 8f 39 01 00 00    	jg     0x100f3180
100f3047:	0f 84 29 01 00 00    	je     0x100f3176
100f304d:	81 fe 80 00 00 00    	cmp    esi,0x80
100f3053:	0f 8f 95 00 00 00    	jg     0x100f30ee
100f3059:	0f 84 85 00 00 00    	je     0x100f30e4
100f305f:	83 fe 08             	cmp    esi,0x8
100f3062:	7f 51                	jg     0x100f30b5
100f3064:	74 45                	je     0x100f30ab
100f3066:	83 fe 02             	cmp    esi,0x2
100f3069:	7f 2f                	jg     0x100f309a
100f306b:	74 23                	je     0x100f3090
100f306d:	81 fe 00 00 00 80    	cmp    esi,0x80000000
100f3073:	74 11                	je     0x100f3086
100f3075:	83 fe 01             	cmp    esi,0x1
100f3078:	0f 85 03 02 00 00    	jne    0x100f3281
100f307e:	8d 7e 0e             	lea    edi,[esi+0xe]
100f3081:	e9 3f 02 00 00       	jmp    0x100f32c5
100f3086:	bf 52 00 00 00       	mov    edi,0x52
100f308b:	e9 35 02 00 00       	jmp    0x100f32c5
100f3090:	bf 07 00 00 00       	mov    edi,0x7
100f3095:	e9 2b 02 00 00       	jmp    0x100f32c5
100f309a:	83 fe 04             	cmp    esi,0x4
100f309d:	0f 85 de 01 00 00    	jne    0x100f3281
100f30a3:	8d 7e 29             	lea    edi,[esi+0x29]
100f30a6:	e9 1a 02 00 00       	jmp    0x100f32c5
100f30ab:	bf 16 00 00 00       	mov    edi,0x16
100f30b0:	e9 10 02 00 00       	jmp    0x100f32c5
100f30b5:	83 fe 10             	cmp    esi,0x10
100f30b8:	74 20                	je     0x100f30da
100f30ba:	83 fe 20             	cmp    esi,0x20
100f30bd:	74 11                	je     0x100f30d0
100f30bf:	83 fe 40             	cmp    esi,0x40
100f30c2:	0f 85 b9 01 00 00    	jne    0x100f3281
100f30c8:	8d 7e e7             	lea    edi,[esi-0x19]
100f30cb:	e9 f5 01 00 00       	jmp    0x100f32c5
100f30d0:	bf 53 00 00 00       	mov    edi,0x53
100f30d5:	e9 eb 01 00 00       	jmp    0x100f32c5
100f30da:	bf 03 00 00 00       	mov    edi,0x3
100f30df:	e9 e1 01 00 00       	jmp    0x100f32c5
100f30e4:	bf 33 00 00 00       	mov    edi,0x33
100f30e9:	e9 d7 01 00 00       	jmp    0x100f32c5
100f30ee:	81 fe 00 08 00 00    	cmp    esi,0x800
100f30f4:	7f 46                	jg     0x100f313c
100f30f6:	74 3a                	je     0x100f3132
100f30f8:	81 fe 00 01 00 00    	cmp    esi,0x100
100f30fe:	74 28                	je     0x100f3128
100f3100:	81 fe 00 02 00 00    	cmp    esi,0x200
100f3106:	74 16                	je     0x100f311e
100f3108:	81 fe 00 04 00 00    	cmp    esi,0x400
100f310e:	0f 85 6d 01 00 00    	jne    0x100f3281
100f3114:	bf 36 00 00 00       	mov    edi,0x36
100f3119:	e9 a7 01 00 00       	jmp    0x100f32c5
100f311e:	bf 35 00 00 00       	mov    edi,0x35
100f3123:	e9 9d 01 00 00       	jmp    0x100f32c5
100f3128:	bf 34 00 00 00       	mov    edi,0x34
100f312d:	e9 93 01 00 00       	jmp    0x100f32c5
100f3132:	bf 37 00 00 00       	mov    edi,0x37
100f3137:	e9 89 01 00 00       	jmp    0x100f32c5
100f313c:	81 fe 00 10 00 00    	cmp    esi,0x1000
100f3142:	74 28                	je     0x100f316c
100f3144:	81 fe 00 20 00 00    	cmp    esi,0x2000
100f314a:	74 16                	je     0x100f3162
100f314c:	81 fe 00 40 00 00    	cmp    esi,0x4000
100f3152:	0f 85 29 01 00 00    	jne    0x100f3281
100f3158:	bf 3a 00 00 00       	mov    edi,0x3a
100f315d:	e9 63 01 00 00       	jmp    0x100f32c5
100f3162:	bf 39 00 00 00       	mov    edi,0x39
100f3167:	e9 59 01 00 00       	jmp    0x100f32c5
100f316c:	bf 38 00 00 00       	mov    edi,0x38
100f3171:	e9 4f 01 00 00       	jmp    0x100f32c5
100f3176:	bf 3b 00 00 00       	mov    edi,0x3b
100f317b:	e9 45 01 00 00       	jmp    0x100f32c5
100f3180:	81 fe 00 00 80 00    	cmp    esi,0x800000
100f3186:	0f 8f 98 00 00 00    	jg     0x100f3224
100f318c:	0f 84 88 00 00 00    	je     0x100f321a
100f3192:	81 fe 00 00 08 00    	cmp    esi,0x80000
100f3198:	7f 46                	jg     0x100f31e0
100f319a:	74 3a                	je     0x100f31d6
100f319c:	81 fe 00 00 01 00    	cmp    esi,0x10000
100f31a2:	74 28                	je     0x100f31cc
100f31a4:	81 fe 00 00 02 00    	cmp    esi,0x20000
100f31aa:	74 16                	je     0x100f31c2
100f31ac:	81 fe 00 00 04 00    	cmp    esi,0x40000
100f31b2:	0f 85 c9 00 00 00    	jne    0x100f3281
100f31b8:	bf 3e 00 00 00       	mov    edi,0x3e
100f31bd:	e9 03 01 00 00       	jmp    0x100f32c5
100f31c2:	bf 3d 00 00 00       	mov    edi,0x3d
100f31c7:	e9 f9 00 00 00       	jmp    0x100f32c5
100f31cc:	bf 3c 00 00 00       	mov    edi,0x3c
100f31d1:	e9 ef 00 00 00       	jmp    0x100f32c5
100f31d6:	bf 46 00 00 00       	mov    edi,0x46
100f31db:	e9 e5 00 00 00       	jmp    0x100f32c5
100f31e0:	81 fe 00 00 10 00    	cmp    esi,0x100000
100f31e6:	74 28                	je     0x100f3210
100f31e8:	81 fe 00 00 20 00    	cmp    esi,0x200000
100f31ee:	74 16                	je     0x100f3206
100f31f0:	81 fe 00 00 40 00    	cmp    esi,0x400000
100f31f6:	0f 85 85 00 00 00    	jne    0x100f3281
100f31fc:	bf 49 00 00 00       	mov    edi,0x49
100f3201:	e9 bf 00 00 00       	jmp    0x100f32c5
100f3206:	bf 48 00 00 00       	mov    edi,0x48
100f320b:	e9 b5 00 00 00       	jmp    0x100f32c5
100f3210:	bf 47 00 00 00       	mov    edi,0x47
100f3215:	e9 ab 00 00 00       	jmp    0x100f32c5
100f321a:	bf 4a 00 00 00       	mov    edi,0x4a
100f321f:	e9 a1 00 00 00       	jmp    0x100f32c5
100f3224:	81 fe 00 00 00 08    	cmp    esi,0x8000000
100f322a:	7f 36                	jg     0x100f3262
100f322c:	74 2d                	je     0x100f325b
100f322e:	81 fe 00 00 00 01    	cmp    esi,0x1000000
100f3234:	74 1e                	je     0x100f3254
100f3236:	81 fe 00 00 00 02    	cmp    esi,0x2000000
100f323c:	74 0f                	je     0x100f324d
100f323e:	81 fe 00 00 00 04    	cmp    esi,0x4000000
100f3244:	75 3b                	jne    0x100f3281
100f3246:	bf 4d 00 00 00       	mov    edi,0x4d
100f324b:	eb 78                	jmp    0x100f32c5
100f324d:	bf 4c 00 00 00       	mov    edi,0x4c
100f3252:	eb 71                	jmp    0x100f32c5
100f3254:	bf 4b 00 00 00       	mov    edi,0x4b
100f3259:	eb 6a                	jmp    0x100f32c5
100f325b:	bf 4e 00 00 00       	mov    edi,0x4e
100f3260:	eb 63                	jmp    0x100f32c5
100f3262:	81 fe 00 00 00 10    	cmp    esi,0x10000000
100f3268:	74 56                	je     0x100f32c0
100f326a:	81 fe 00 00 00 20    	cmp    esi,0x20000000
100f3270:	74 47                	je     0x100f32b9
100f3272:	81 fe 00 00 00 40    	cmp    esi,0x40000000
100f3278:	75 07                	jne    0x100f3281
100f327a:	bf 51 00 00 00       	mov    edi,0x51
100f327f:	eb 44                	jmp    0x100f32c5
100f3281:	85 ff                	test   edi,edi
100f3283:	75 40                	jne    0x100f32c5
100f3285:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100f328b:	e8 80 72 f5 ff       	call   0x1004a510
100f3290:	8d 8d 54 fb ff ff    	lea    ecx,[ebp-0x4ac]
100f3296:	e8 55 d6 f3 ff       	call   0x100308f0
100f329b:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100f329e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100f32a5:	59                   	pop    ecx
100f32a6:	5f                   	pop    edi
100f32a7:	5e                   	pop    esi
100f32a8:	5b                   	pop    ebx
100f32a9:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100f32ac:	33 cd                	xor    ecx,ebp
100f32ae:	e8 00 a9 04 00       	call   0x1013dbb3
100f32b3:	8b e5                	mov    esp,ebp
100f32b5:	5d                   	pop    ebp
100f32b6:	c2 10 00             	ret    0x10
100f32b9:	bf 50 00 00 00       	mov    edi,0x50
100f32be:	eb 05                	jmp    0x100f32c5
100f32c0:	bf 4f 00 00 00       	mov    edi,0x4f
100f32c5:	8d 85 d8 fc ff ff    	lea    eax,[ebp-0x328]
100f32cb:	c7 85 bc fc ff ff 01 	mov    DWORD PTR [ebp-0x344],0x1
100f32d2:	00 00 00 
100f32d5:	50                   	push   eax
100f32d6:	8d 85 54 fb ff ff    	lea    eax,[ebp-0x4ac]
100f32dc:	50                   	push   eax
100f32dd:	e8 6e c2 f3 ff       	call   0x1002f550
100f32e2:	83 c4 08             	add    esp,0x8
100f32e5:	8b 08                	mov    ecx,DWORD PTR [eax]
100f32e7:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100f32ea:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100f32ef:	0f 85 71 06 00 00    	jne    0x100f3966
100f32f5:	8a 5d 0c             	mov    bl,BYTE PTR [ebp+0xc]
100f32f8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100f32ff:	00 
100f3300:	8b 85 bc fc ff ff    	mov    eax,DWORD PTR [ebp-0x344]
100f3306:	3b c7                	cmp    eax,edi
100f3308:	0f 85 f9 04 00 00    	jne    0x100f3807
100f330e:	83 bd ec fc ff ff 10 	cmp    DWORD PTR [ebp-0x314],0x10
100f3315:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100f331b:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100f3321:	0f 43 8d d8 fc ff ff 	cmovae ecx,DWORD PTR [ebp-0x328]
100f3328:	2b d1                	sub    edx,ecx
100f332a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100f3330:	8a 01                	mov    al,BYTE PTR [ecx]
100f3332:	8d 49 01             	lea    ecx,[ecx+0x1]
100f3335:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100f3339:	84 c0                	test   al,al
100f333b:	75 f3                	jne    0x100f3330
100f333d:	8b 85 e8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x318]
100f3343:	3d 00 01 00 00       	cmp    eax,0x100
100f3348:	0f 83 86 06 00 00    	jae    0x100f39d4
100f334e:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100f3355:	00 
100f3356:	81 fe 00 80 00 00    	cmp    esi,0x8000
100f335c:	0f 8f 6f 02 00 00    	jg     0x100f35d1
100f3362:	0f 84 4e 02 00 00    	je     0x100f35b6
100f3368:	81 fe 80 00 00 00    	cmp    esi,0x80
100f336e:	0f 8f 3f 01 00 00    	jg     0x100f34b3
100f3374:	0f 84 1e 01 00 00    	je     0x100f3498
100f337a:	83 fe 08             	cmp    esi,0x8
100f337d:	0f 8f ae 00 00 00    	jg     0x100f3431
100f3383:	0f 84 8d 00 00 00    	je     0x100f3416
100f3389:	83 fe 02             	cmp    esi,0x2
100f338c:	7f 64                	jg     0x100f33f2
100f338e:	74 47                	je     0x100f33d7
100f3390:	81 fe 00 00 00 80    	cmp    esi,0x80000000
100f3396:	74 24                	je     0x100f33bc
100f3398:	83 fe 01             	cmp    esi,0x1
100f339b:	0f 85 99 05 00 00    	jne    0x100f393a
100f33a1:	84 db                	test   bl,bl
100f33a3:	b8 bc d3 1d 10       	mov    eax,0x101dd3bc
100f33a8:	b9 a4 d3 1d 10       	mov    ecx,0x101dd3a4
100f33ad:	0f 45 c1             	cmovne eax,ecx
100f33b0:	50                   	push   eax
100f33b1:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f33b7:	e9 75 05 00 00       	jmp    0x100f3931
100f33bc:	84 db                	test   bl,bl
100f33be:	b8 5c d9 1d 10       	mov    eax,0x101dd95c
100f33c3:	b9 44 d9 1d 10       	mov    ecx,0x101dd944
100f33c8:	0f 45 c1             	cmovne eax,ecx
100f33cb:	50                   	push   eax
100f33cc:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f33d2:	e9 5a 05 00 00       	jmp    0x100f3931
100f33d7:	84 db                	test   bl,bl
100f33d9:	b8 ec d3 1d 10       	mov    eax,0x101dd3ec
100f33de:	b9 d4 d3 1d 10       	mov    ecx,0x101dd3d4
100f33e3:	0f 45 c1             	cmovne eax,ecx
100f33e6:	50                   	push   eax
100f33e7:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f33ed:	e9 3f 05 00 00       	jmp    0x100f3931
100f33f2:	83 fe 04             	cmp    esi,0x4
100f33f5:	0f 85 3f 05 00 00    	jne    0x100f393a
100f33fb:	84 db                	test   bl,bl
100f33fd:	b8 1c d4 1d 10       	mov    eax,0x101dd41c
100f3402:	b9 04 d4 1d 10       	mov    ecx,0x101dd404
100f3407:	0f 45 c1             	cmovne eax,ecx
100f340a:	50                   	push   eax
100f340b:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3411:	e9 1b 05 00 00       	jmp    0x100f3931
100f3416:	84 db                	test   bl,bl
100f3418:	b8 4c d4 1d 10       	mov    eax,0x101dd44c
100f341d:	b9 34 d4 1d 10       	mov    ecx,0x101dd434
100f3422:	0f 45 c1             	cmovne eax,ecx
100f3425:	50                   	push   eax
100f3426:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f342c:	e9 00 05 00 00       	jmp    0x100f3931
100f3431:	83 fe 10             	cmp    esi,0x10
100f3434:	74 47                	je     0x100f347d
100f3436:	83 fe 20             	cmp    esi,0x20
100f3439:	74 24                	je     0x100f345f
100f343b:	83 fe 40             	cmp    esi,0x40
100f343e:	0f 85 f6 04 00 00    	jne    0x100f393a
100f3444:	84 db                	test   bl,bl
100f3446:	b8 ac d4 1d 10       	mov    eax,0x101dd4ac
100f344b:	b9 94 d4 1d 10       	mov    ecx,0x101dd494
100f3450:	0f 45 c1             	cmovne eax,ecx
100f3453:	50                   	push   eax
100f3454:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f345a:	e9 d2 04 00 00       	jmp    0x100f3931
100f345f:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3465:	84 db                	test   bl,bl
100f3467:	74 0a                	je     0x100f3473
100f3469:	68 74 d9 1d 10       	push   0x101dd974
100f346e:	e9 be 04 00 00       	jmp    0x100f3931
100f3473:	68 8c d9 1d 10       	push   0x101dd98c
100f3478:	e9 b4 04 00 00       	jmp    0x100f3931
100f347d:	84 db                	test   bl,bl
100f347f:	b8 7c d4 1d 10       	mov    eax,0x101dd47c
100f3484:	b9 64 d4 1d 10       	mov    ecx,0x101dd464
100f3489:	0f 45 c1             	cmovne eax,ecx
100f348c:	50                   	push   eax
100f348d:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3493:	e9 99 04 00 00       	jmp    0x100f3931
100f3498:	84 db                	test   bl,bl
100f349a:	b8 dc d4 1d 10       	mov    eax,0x101dd4dc
100f349f:	b9 c4 d4 1d 10       	mov    ecx,0x101dd4c4
100f34a4:	0f 45 c1             	cmovne eax,ecx
100f34a7:	50                   	push   eax
100f34a8:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f34ae:	e9 7e 04 00 00       	jmp    0x100f3931
100f34b3:	81 fe 00 08 00 00    	cmp    esi,0x800
100f34b9:	0f 8f 8a 00 00 00    	jg     0x100f3549
100f34bf:	74 6d                	je     0x100f352e
100f34c1:	81 fe 00 01 00 00    	cmp    esi,0x100
100f34c7:	74 4a                	je     0x100f3513
100f34c9:	81 fe 00 02 00 00    	cmp    esi,0x200
100f34cf:	74 27                	je     0x100f34f8
100f34d1:	81 fe 00 04 00 00    	cmp    esi,0x400
100f34d7:	0f 85 5d 04 00 00    	jne    0x100f393a
100f34dd:	84 db                	test   bl,bl
100f34df:	b8 6c d5 1d 10       	mov    eax,0x101dd56c
100f34e4:	b9 54 d5 1d 10       	mov    ecx,0x101dd554
100f34e9:	0f 45 c1             	cmovne eax,ecx
100f34ec:	50                   	push   eax
100f34ed:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f34f3:	e9 39 04 00 00       	jmp    0x100f3931
100f34f8:	84 db                	test   bl,bl
100f34fa:	b8 3c d5 1d 10       	mov    eax,0x101dd53c
100f34ff:	b9 24 d5 1d 10       	mov    ecx,0x101dd524
100f3504:	0f 45 c1             	cmovne eax,ecx
100f3507:	50                   	push   eax
100f3508:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f350e:	e9 1e 04 00 00       	jmp    0x100f3931
100f3513:	84 db                	test   bl,bl
100f3515:	b8 0c d5 1d 10       	mov    eax,0x101dd50c
100f351a:	b9 f4 d4 1d 10       	mov    ecx,0x101dd4f4
100f351f:	0f 45 c1             	cmovne eax,ecx
100f3522:	50                   	push   eax
100f3523:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3529:	e9 03 04 00 00       	jmp    0x100f3931
100f352e:	84 db                	test   bl,bl
100f3530:	b8 9c d5 1d 10       	mov    eax,0x101dd59c
100f3535:	b9 84 d5 1d 10       	mov    ecx,0x101dd584
100f353a:	0f 45 c1             	cmovne eax,ecx
100f353d:	50                   	push   eax
100f353e:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3544:	e9 e8 03 00 00       	jmp    0x100f3931
100f3549:	81 fe 00 10 00 00    	cmp    esi,0x1000
100f354f:	74 4a                	je     0x100f359b
100f3551:	81 fe 00 20 00 00    	cmp    esi,0x2000
100f3557:	74 27                	je     0x100f3580
100f3559:	81 fe 00 40 00 00    	cmp    esi,0x4000
100f355f:	0f 85 d5 03 00 00    	jne    0x100f393a
100f3565:	84 db                	test   bl,bl
100f3567:	b8 2c d6 1d 10       	mov    eax,0x101dd62c
100f356c:	b9 14 d6 1d 10       	mov    ecx,0x101dd614
100f3571:	0f 45 c1             	cmovne eax,ecx
100f3574:	50                   	push   eax
100f3575:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f357b:	e9 b1 03 00 00       	jmp    0x100f3931
100f3580:	84 db                	test   bl,bl
100f3582:	b8 fc d5 1d 10       	mov    eax,0x101dd5fc
100f3587:	b9 e4 d5 1d 10       	mov    ecx,0x101dd5e4
100f358c:	0f 45 c1             	cmovne eax,ecx
100f358f:	50                   	push   eax
100f3590:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3596:	e9 96 03 00 00       	jmp    0x100f3931
100f359b:	84 db                	test   bl,bl
100f359d:	b8 cc d5 1d 10       	mov    eax,0x101dd5cc
100f35a2:	b9 b4 d5 1d 10       	mov    ecx,0x101dd5b4
100f35a7:	0f 45 c1             	cmovne eax,ecx
100f35aa:	50                   	push   eax
100f35ab:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f35b1:	e9 7b 03 00 00       	jmp    0x100f3931
100f35b6:	84 db                	test   bl,bl
100f35b8:	b8 5c d6 1d 10       	mov    eax,0x101dd65c
100f35bd:	b9 44 d6 1d 10       	mov    ecx,0x101dd644
100f35c2:	0f 45 c1             	cmovne eax,ecx
100f35c5:	50                   	push   eax
100f35c6:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f35cc:	e9 60 03 00 00       	jmp    0x100f3931
100f35d1:	81 fe 00 00 80 00    	cmp    esi,0x800000
100f35d7:	0f 8f 24 01 00 00    	jg     0x100f3701
100f35dd:	0f 84 03 01 00 00    	je     0x100f36e6
100f35e3:	81 fe 00 00 08 00    	cmp    esi,0x80000
100f35e9:	0f 8f 8a 00 00 00    	jg     0x100f3679
100f35ef:	74 6d                	je     0x100f365e
100f35f1:	81 fe 00 00 01 00    	cmp    esi,0x10000
100f35f7:	74 4a                	je     0x100f3643
100f35f9:	81 fe 00 00 02 00    	cmp    esi,0x20000
100f35ff:	74 27                	je     0x100f3628
100f3601:	81 fe 00 00 04 00    	cmp    esi,0x40000
100f3607:	0f 85 2d 03 00 00    	jne    0x100f393a
100f360d:	84 db                	test   bl,bl
100f360f:	b8 ec d6 1d 10       	mov    eax,0x101dd6ec
100f3614:	b9 d4 d6 1d 10       	mov    ecx,0x101dd6d4
100f3619:	0f 45 c1             	cmovne eax,ecx
100f361c:	50                   	push   eax
100f361d:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3623:	e9 09 03 00 00       	jmp    0x100f3931
100f3628:	84 db                	test   bl,bl
100f362a:	b8 bc d6 1d 10       	mov    eax,0x101dd6bc
100f362f:	b9 a4 d6 1d 10       	mov    ecx,0x101dd6a4
100f3634:	0f 45 c1             	cmovne eax,ecx
100f3637:	50                   	push   eax
100f3638:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f363e:	e9 ee 02 00 00       	jmp    0x100f3931
100f3643:	84 db                	test   bl,bl
100f3645:	b8 8c d6 1d 10       	mov    eax,0x101dd68c
100f364a:	b9 74 d6 1d 10       	mov    ecx,0x101dd674
100f364f:	0f 45 c1             	cmovne eax,ecx
100f3652:	50                   	push   eax
100f3653:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3659:	e9 d3 02 00 00       	jmp    0x100f3931
100f365e:	84 db                	test   bl,bl
100f3660:	b8 1c d7 1d 10       	mov    eax,0x101dd71c
100f3665:	b9 04 d7 1d 10       	mov    ecx,0x101dd704
100f366a:	0f 45 c1             	cmovne eax,ecx
100f366d:	50                   	push   eax
100f366e:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3674:	e9 b8 02 00 00       	jmp    0x100f3931
100f3679:	81 fe 00 00 10 00    	cmp    esi,0x100000
100f367f:	74 4a                	je     0x100f36cb
100f3681:	81 fe 00 00 20 00    	cmp    esi,0x200000
100f3687:	74 27                	je     0x100f36b0
100f3689:	81 fe 00 00 40 00    	cmp    esi,0x400000
100f368f:	0f 85 a5 02 00 00    	jne    0x100f393a
100f3695:	84 db                	test   bl,bl
100f3697:	b8 ac d7 1d 10       	mov    eax,0x101dd7ac
100f369c:	b9 94 d7 1d 10       	mov    ecx,0x101dd794
100f36a1:	0f 45 c1             	cmovne eax,ecx
100f36a4:	50                   	push   eax
100f36a5:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f36ab:	e9 81 02 00 00       	jmp    0x100f3931
100f36b0:	84 db                	test   bl,bl
100f36b2:	b8 7c d7 1d 10       	mov    eax,0x101dd77c
100f36b7:	b9 64 d7 1d 10       	mov    ecx,0x101dd764
100f36bc:	0f 45 c1             	cmovne eax,ecx
100f36bf:	50                   	push   eax
100f36c0:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f36c6:	e9 66 02 00 00       	jmp    0x100f3931
100f36cb:	84 db                	test   bl,bl
100f36cd:	b8 4c d7 1d 10       	mov    eax,0x101dd74c
100f36d2:	b9 34 d7 1d 10       	mov    ecx,0x101dd734
100f36d7:	0f 45 c1             	cmovne eax,ecx
100f36da:	50                   	push   eax
100f36db:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f36e1:	e9 4b 02 00 00       	jmp    0x100f3931
100f36e6:	84 db                	test   bl,bl
100f36e8:	b8 dc d7 1d 10       	mov    eax,0x101dd7dc
100f36ed:	b9 c4 d7 1d 10       	mov    ecx,0x101dd7c4
100f36f2:	0f 45 c1             	cmovne eax,ecx
100f36f5:	50                   	push   eax
100f36f6:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f36fc:	e9 30 02 00 00       	jmp    0x100f3931
100f3701:	81 fe 00 00 00 08    	cmp    esi,0x8000000
100f3707:	0f 8f 8a 00 00 00    	jg     0x100f3797
100f370d:	74 6d                	je     0x100f377c
100f370f:	81 fe 00 00 00 01    	cmp    esi,0x1000000
100f3715:	74 4a                	je     0x100f3761
100f3717:	81 fe 00 00 00 02    	cmp    esi,0x2000000
100f371d:	74 27                	je     0x100f3746
100f371f:	81 fe 00 00 00 04    	cmp    esi,0x4000000
100f3725:	0f 85 0f 02 00 00    	jne    0x100f393a
100f372b:	84 db                	test   bl,bl
100f372d:	b8 6c d8 1d 10       	mov    eax,0x101dd86c
100f3732:	b9 54 d8 1d 10       	mov    ecx,0x101dd854
100f3737:	0f 45 c1             	cmovne eax,ecx
100f373a:	50                   	push   eax
100f373b:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3741:	e9 eb 01 00 00       	jmp    0x100f3931
100f3746:	84 db                	test   bl,bl
100f3748:	b8 3c d8 1d 10       	mov    eax,0x101dd83c
100f374d:	b9 24 d8 1d 10       	mov    ecx,0x101dd824
100f3752:	0f 45 c1             	cmovne eax,ecx
100f3755:	50                   	push   eax
100f3756:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f375c:	e9 d0 01 00 00       	jmp    0x100f3931
100f3761:	84 db                	test   bl,bl
100f3763:	b8 0c d8 1d 10       	mov    eax,0x101dd80c
100f3768:	b9 f4 d7 1d 10       	mov    ecx,0x101dd7f4
100f376d:	0f 45 c1             	cmovne eax,ecx
100f3770:	50                   	push   eax
100f3771:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3777:	e9 b5 01 00 00       	jmp    0x100f3931
100f377c:	84 db                	test   bl,bl
100f377e:	b8 9c d8 1d 10       	mov    eax,0x101dd89c
100f3783:	b9 84 d8 1d 10       	mov    ecx,0x101dd884
100f3788:	0f 45 c1             	cmovne eax,ecx
100f378b:	50                   	push   eax
100f378c:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3792:	e9 9a 01 00 00       	jmp    0x100f3931
100f3797:	81 fe 00 00 00 10    	cmp    esi,0x10000000
100f379d:	74 4a                	je     0x100f37e9
100f379f:	81 fe 00 00 00 20    	cmp    esi,0x20000000
100f37a5:	74 27                	je     0x100f37ce
100f37a7:	81 fe 00 00 00 40    	cmp    esi,0x40000000
100f37ad:	0f 85 87 01 00 00    	jne    0x100f393a
100f37b3:	84 db                	test   bl,bl
100f37b5:	b8 2c d9 1d 10       	mov    eax,0x101dd92c
100f37ba:	b9 14 d9 1d 10       	mov    ecx,0x101dd914
100f37bf:	0f 45 c1             	cmovne eax,ecx
100f37c2:	50                   	push   eax
100f37c3:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f37c9:	e9 63 01 00 00       	jmp    0x100f3931
100f37ce:	84 db                	test   bl,bl
100f37d0:	b8 fc d8 1d 10       	mov    eax,0x101dd8fc
100f37d5:	b9 e4 d8 1d 10       	mov    ecx,0x101dd8e4
100f37da:	0f 45 c1             	cmovne eax,ecx
100f37dd:	50                   	push   eax
100f37de:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f37e4:	e9 48 01 00 00       	jmp    0x100f3931
100f37e9:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f37ef:	84 db                	test   bl,bl
100f37f1:	74 0a                	je     0x100f37fd
100f37f3:	68 b4 d8 1d 10       	push   0x101dd8b4
100f37f8:	e9 34 01 00 00       	jmp    0x100f3931
100f37fd:	68 cc d8 1d 10       	push   0x101dd8cc
100f3802:	e9 2a 01 00 00       	jmp    0x100f3931
100f3807:	80 7d 10 00          	cmp    BYTE PTR [ebp+0x10],0x0
100f380b:	74 64                	je     0x100f3871
100f380d:	83 f8 2f             	cmp    eax,0x2f
100f3810:	75 5f                	jne    0x100f3871
100f3812:	83 bd ec fc ff ff 10 	cmp    DWORD PTR [ebp-0x314],0x10
100f3819:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100f381f:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100f3825:	0f 43 8d d8 fc ff ff 	cmovae ecx,DWORD PTR [ebp-0x328]
100f382c:	2b d1                	sub    edx,ecx
100f382e:	66 90                	xchg   ax,ax
100f3830:	8a 01                	mov    al,BYTE PTR [ecx]
100f3832:	8d 49 01             	lea    ecx,[ecx+0x1]
100f3835:	88 44 11 ff          	mov    BYTE PTR [ecx+edx*1-0x1],al
100f3839:	84 c0                	test   al,al
100f383b:	75 f3                	jne    0x100f3830
100f383d:	8b 85 e8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x318]
100f3843:	3d 00 01 00 00       	cmp    eax,0x100
100f3848:	0f 83 86 01 00 00    	jae    0x100f39d4
100f384e:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100f3855:	00 
100f3856:	84 db                	test   bl,bl
100f3858:	b8 bc d9 1d 10       	mov    eax,0x101dd9bc
100f385d:	b9 a4 d9 1d 10       	mov    ecx,0x101dd9a4
100f3862:	0f 45 c1             	cmovne eax,ecx
100f3865:	50                   	push   eax
100f3866:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f386c:	e9 c0 00 00 00       	jmp    0x100f3931
100f3871:	84 ff                	test   bh,bh
100f3873:	74 5f                	je     0x100f38d4
100f3875:	83 f8 30             	cmp    eax,0x30
100f3878:	75 5a                	jne    0x100f38d4
100f387a:	83 bd ec fc ff ff 10 	cmp    DWORD PTR [ebp-0x314],0x10
100f3881:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100f3887:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100f388d:	0f 43 8d d8 fc ff ff 	cmovae ecx,DWORD PTR [ebp-0x328]
100f3894:	2b d1                	sub    edx,ecx
100f3896:	8a 01                	mov    al,BYTE PTR [ecx]
100f3898:	8d 49 01             	lea    ecx,[ecx+0x1]
100f389b:	88 44 11 ff          	mov    BYTE PTR [ecx+edx*1-0x1],al
100f389f:	84 c0                	test   al,al
100f38a1:	75 f3                	jne    0x100f3896
100f38a3:	8b 85 e8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x318]
100f38a9:	3d 00 01 00 00       	cmp    eax,0x100
100f38ae:	0f 83 20 01 00 00    	jae    0x100f39d4
100f38b4:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100f38bb:	00 
100f38bc:	84 db                	test   bl,bl
100f38be:	b8 ec d9 1d 10       	mov    eax,0x101dd9ec
100f38c3:	b9 d4 d9 1d 10       	mov    ecx,0x101dd9d4
100f38c8:	0f 45 c1             	cmovne eax,ecx
100f38cb:	50                   	push   eax
100f38cc:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f38d2:	eb 5d                	jmp    0x100f3931
100f38d4:	83 bd ec fc ff ff 10 	cmp    DWORD PTR [ebp-0x314],0x10
100f38db:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100f38e1:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100f38e7:	0f 43 8d d8 fc ff ff 	cmovae ecx,DWORD PTR [ebp-0x328]
100f38ee:	2b d1                	sub    edx,ecx
100f38f0:	8a 01                	mov    al,BYTE PTR [ecx]
100f38f2:	8d 49 01             	lea    ecx,[ecx+0x1]
100f38f5:	88 44 11 ff          	mov    BYTE PTR [ecx+edx*1-0x1],al
100f38f9:	84 c0                	test   al,al
100f38fb:	75 f3                	jne    0x100f38f0
100f38fd:	8b 85 e8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x318]
100f3903:	3d 00 01 00 00       	cmp    eax,0x100
100f3908:	0f 83 c6 00 00 00    	jae    0x100f39d4
100f390e:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100f3915:	00 
100f3916:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100f391c:	68 c8 84 1a 10       	push   0x101a84c8
100f3921:	50                   	push   eax
100f3922:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100f3928:	50                   	push   eax
100f3929:	e8 82 5a f5 ff       	call   0x100493b0
100f392e:	83 c4 08             	add    esp,0x8
100f3931:	50                   	push   eax
100f3932:	e8 79 5a f5 ff       	call   0x100493b0
100f3937:	83 c4 08             	add    esp,0x8
100f393a:	ff 85 bc fc ff ff    	inc    DWORD PTR [ebp-0x344]
100f3940:	8d 85 d8 fc ff ff    	lea    eax,[ebp-0x328]
100f3946:	50                   	push   eax
100f3947:	8d 85 54 fb ff ff    	lea    eax,[ebp-0x4ac]
100f394d:	50                   	push   eax
100f394e:	e8 fd bb f3 ff       	call   0x1002f550
100f3953:	83 c4 08             	add    esp,0x8
100f3956:	8b 08                	mov    ecx,DWORD PTR [eax]
100f3958:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100f395b:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100f3960:	0f 84 9a f9 ff ff    	je     0x100f3300
100f3966:	8d 8d 54 fb ff ff    	lea    ecx,[ebp-0x4ac]
100f396c:	e8 af 63 00 00       	call   0x100f9d20
100f3971:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100f3977:	e8 34 64 00 00       	call   0x100f9db0
100f397c:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100f3982:	50                   	push   eax
100f3983:	e8 7e 0d 08 00       	call   0x10174706
100f3988:	83 c4 04             	add    esp,0x4
100f398b:	85 c0                	test   eax,eax
100f398d:	75 16                	jne    0x100f39a5
100f398f:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100f3995:	50                   	push   eax
100f3996:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
100f399c:	50                   	push   eax
100f399d:	e8 a1 0e 08 00       	call   0x10174843
100f39a2:	83 c4 08             	add    esp,0x8
100f39a5:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100f39ab:	e8 60 6b f5 ff       	call   0x1004a510
100f39b0:	8b 85 ec fc ff ff    	mov    eax,DWORD PTR [ebp-0x314]
100f39b6:	83 f8 10             	cmp    eax,0x10
100f39b9:	0f 82 d1 f8 ff ff    	jb     0x100f3290
100f39bf:	40                   	inc    eax
100f39c0:	50                   	push   eax
100f39c1:	ff b5 d8 fc ff ff    	push   DWORD PTR [ebp-0x328]
100f39c7:	e8 c4 b8 f3 ff       	call   0x1002f290
100f39cc:	83 c4 08             	add    esp,0x8
100f39cf:	e9 bc f8 ff ff       	jmp    0x100f3290
100f39d4:	e8 6f a3 04 00       	call   0x1013dd48
