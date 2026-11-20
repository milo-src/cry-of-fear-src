
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e3020 <.text+0xe2020>:
100e3020:	55                   	push   ebp
100e3021:	8b ec                	mov    ebp,esp
100e3023:	81 ec 08 01 00 00    	sub    esp,0x108
100e3029:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100e302e:	33 c5                	xor    eax,ebp
100e3030:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e3033:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100e3036:	53                   	push   ebx
100e3037:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100e303a:	56                   	push   esi
100e303b:	8b f1                	mov    esi,ecx
100e303d:	89 85 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],eax
100e3043:	57                   	push   edi
100e3044:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100e3047:	80 be e8 1e 00 00 00 	cmp    BYTE PTR [esi+0x1ee8],0x0
100e304e:	0f 85 eb 03 00 00    	jne    0x100e343f
100e3054:	e8 77 1e 00 00       	call   0x100e4ed0
100e3059:	85 c0                	test   eax,eax
100e305b:	0f 85 de 03 00 00    	jne    0x100e343f
100e3061:	8b 8d f8 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x108]
100e3067:	8d 51 01             	lea    edx,[ecx+0x1]
100e306a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100e3070:	8a 01                	mov    al,BYTE PTR [ecx]
100e3072:	41                   	inc    ecx
100e3073:	84 c0                	test   al,al
100e3075:	75 f9                	jne    0x100e3070
100e3077:	2b ca                	sub    ecx,edx
100e3079:	83 f9 01             	cmp    ecx,0x1
100e307c:	77 15                	ja     0x100e3093
100e307e:	68 dc c6 1d 10       	push   0x101dc6dc
100e3083:	6a 01                	push   0x1
100e3085:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e308b:	83 c4 08             	add    esp,0x8
100e308e:	e9 7e 03 00 00       	jmp    0x100e3411
100e3093:	ff b4 be fc 21 00 00 	push   DWORD PTR [esi+edi*4+0x21fc]
100e309a:	8b ce                	mov    ecx,esi
100e309c:	e8 3f 1e 00 00       	call   0x100e4ee0
100e30a1:	85 c0                	test   eax,eax
100e30a3:	0f 85 56 03 00 00    	jne    0x100e33ff
100e30a9:	ff b4 9e fc 21 00 00 	push   DWORD PTR [esi+ebx*4+0x21fc]
100e30b0:	8b ce                	mov    ecx,esi
100e30b2:	e8 29 1e 00 00       	call   0x100e4ee0
100e30b7:	85 c0                	test   eax,eax
100e30b9:	0f 85 40 03 00 00    	jne    0x100e33ff
100e30bf:	8d 47 ff             	lea    eax,[edi-0x1]
100e30c2:	83 f8 05             	cmp    eax,0x5
100e30c5:	0f 87 2b 03 00 00    	ja     0x100e33f6
100e30cb:	8d 43 ff             	lea    eax,[ebx-0x1]
100e30ce:	83 f8 05             	cmp    eax,0x5
100e30d1:	0f 87 1f 03 00 00    	ja     0x100e33f6
100e30d7:	3b fb                	cmp    edi,ebx
100e30d9:	0f 84 17 03 00 00    	je     0x100e33f6
100e30df:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e30e4:	8b ce                	mov    ecx,esi
100e30e6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e30ec:	03 84 be fc 21 00 00 	add    eax,DWORD PTR [esi+edi*4+0x21fc]
100e30f3:	50                   	push   eax
100e30f4:	68 60 c7 1d 10       	push   0x101dc760
100e30f9:	e8 72 ce ff ff       	call   0x100dff70
100e30fe:	50                   	push   eax
100e30ff:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
100e3105:	68 4c 12 1a 10       	push   0x101a124c
100e310a:	50                   	push   eax
100e310b:	e8 50 c0 f3 ff       	call   0x1001f160
100e3110:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3115:	83 c4 0c             	add    esp,0xc
100e3118:	8b ce                	mov    ecx,esi
100e311a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3120:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3127:	50                   	push   eax
100e3128:	68 60 c7 1d 10       	push   0x101dc760
100e312d:	e8 3e ce ff ff       	call   0x100dff70
100e3132:	50                   	push   eax
100e3133:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e3139:	68 4c 12 1a 10       	push   0x101a124c
100e313e:	50                   	push   eax
100e313f:	e8 1c c0 f3 ff       	call   0x1001f160
100e3144:	83 c4 0c             	add    esp,0xc
100e3147:	8d 8d 7c ff ff ff    	lea    ecx,[ebp-0x84]
100e314d:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
100e3153:	8a 10                	mov    dl,BYTE PTR [eax]
100e3155:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e3157:	75 1a                	jne    0x100e3173
100e3159:	84 d2                	test   dl,dl
100e315b:	74 12                	je     0x100e316f
100e315d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e3160:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e3163:	75 0e                	jne    0x100e3173
100e3165:	83 c0 02             	add    eax,0x2
100e3168:	83 c1 02             	add    ecx,0x2
100e316b:	84 d2                	test   dl,dl
100e316d:	75 e4                	jne    0x100e3153
100e316f:	33 c0                	xor    eax,eax
100e3171:	eb 05                	jmp    0x100e3178
100e3173:	1b c0                	sbb    eax,eax
100e3175:	83 c8 01             	or     eax,0x1
100e3178:	85 c0                	test   eax,eax
100e317a:	0f 85 91 02 00 00    	jne    0x100e3411
100e3180:	8b 85 f8 fe ff ff    	mov    eax,DWORD PTR [ebp-0x108]
100e3186:	b9 70 c7 1d 10       	mov    ecx,0x101dc770
100e318b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e3190:	8a 10                	mov    dl,BYTE PTR [eax]
100e3192:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e3194:	75 1a                	jne    0x100e31b0
100e3196:	84 d2                	test   dl,dl
100e3198:	74 12                	je     0x100e31ac
100e319a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e319d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e31a0:	75 0e                	jne    0x100e31b0
100e31a2:	83 c0 02             	add    eax,0x2
100e31a5:	83 c1 02             	add    ecx,0x2
100e31a8:	84 d2                	test   dl,dl
100e31aa:	75 e4                	jne    0x100e3190
100e31ac:	33 c0                	xor    eax,eax
100e31ae:	eb 05                	jmp    0x100e31b5
100e31b0:	1b c0                	sbb    eax,eax
100e31b2:	83 c8 01             	or     eax,0x1
100e31b5:	85 c0                	test   eax,eax
100e31b7:	0f 85 15 01 00 00    	jne    0x100e32d2
100e31bd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e31c2:	b9 5c 1c 1d 10       	mov    ecx,0x101d1c5c
100e31c7:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100e31cd:	8b 84 be fc 21 00 00 	mov    eax,DWORD PTR [esi+edi*4+0x21fc]
100e31d4:	89 95 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],edx
100e31da:	03 c2                	add    eax,edx
100e31dc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100e31e0:	8a 10                	mov    dl,BYTE PTR [eax]
100e31e2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e31e4:	75 1a                	jne    0x100e3200
100e31e6:	84 d2                	test   dl,dl
100e31e8:	74 12                	je     0x100e31fc
100e31ea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e31ed:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e31f0:	75 0e                	jne    0x100e3200
100e31f2:	83 c0 02             	add    eax,0x2
100e31f5:	83 c1 02             	add    ecx,0x2
100e31f8:	84 d2                	test   dl,dl
100e31fa:	75 e4                	jne    0x100e31e0
100e31fc:	33 c0                	xor    eax,eax
100e31fe:	eb 05                	jmp    0x100e3205
100e3200:	1b c0                	sbb    eax,eax
100e3202:	83 c8 01             	or     eax,0x1
100e3205:	85 c0                	test   eax,eax
100e3207:	75 56                	jne    0x100e325f
100e3209:	8b ce                	mov    ecx,esi
100e320b:	e8 30 aa ff ff       	call   0x100ddc40
100e3210:	6a 00                	push   0x0
100e3212:	57                   	push   edi
100e3213:	8b ce                	mov    ecx,esi
100e3215:	e8 76 a7 ff ff       	call   0x100dd990
100e321a:	6a 03                	push   0x3
100e321c:	8b ce                	mov    ecx,esi
100e321e:	e8 ed d0 ff ff       	call   0x100e0310
100e3223:	85 c0                	test   eax,eax
100e3225:	74 07                	je     0x100e322e
100e3227:	c6 80 f8 01 00 00 01 	mov    BYTE PTR [eax+0x1f8],0x1
100e322e:	6a 00                	push   0x0
100e3230:	ff b4 be fc 21 00 00 	push   DWORD PTR [esi+edi*4+0x21fc]
100e3237:	57                   	push   edi
100e3238:	8b ce                	mov    ecx,esi
100e323a:	e8 21 11 00 00       	call   0x100e4360
100e323f:	6a 64                	push   0x64
100e3241:	6a 00                	push   0x0
100e3243:	83 ec 08             	sub    esp,0x8
100e3246:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e324d:	3f 
100e324e:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e3255:	68 3c b5 1a 10       	push   0x101ab53c
100e325a:	e9 cd 01 00 00       	jmp    0x100e342c
100e325f:	8b 84 9e fc 21 00 00 	mov    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3266:	b9 5c 1c 1d 10       	mov    ecx,0x101d1c5c
100e326b:	03 85 f8 fe ff ff    	add    eax,DWORD PTR [ebp-0x108]
100e3271:	8a 10                	mov    dl,BYTE PTR [eax]
100e3273:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e3275:	75 1a                	jne    0x100e3291
100e3277:	84 d2                	test   dl,dl
100e3279:	74 12                	je     0x100e328d
100e327b:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e327e:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e3281:	75 0e                	jne    0x100e3291
100e3283:	83 c0 02             	add    eax,0x2
100e3286:	83 c1 02             	add    ecx,0x2
100e3289:	84 d2                	test   dl,dl
100e328b:	75 e4                	jne    0x100e3271
100e328d:	33 c0                	xor    eax,eax
100e328f:	eb 05                	jmp    0x100e3296
100e3291:	1b c0                	sbb    eax,eax
100e3293:	83 c8 01             	or     eax,0x1
100e3296:	85 c0                	test   eax,eax
100e3298:	0f 85 73 01 00 00    	jne    0x100e3411
100e329e:	8b ce                	mov    ecx,esi
100e32a0:	e8 9b a9 ff ff       	call   0x100ddc40
100e32a5:	6a 00                	push   0x0
100e32a7:	53                   	push   ebx
100e32a8:	8b ce                	mov    ecx,esi
100e32aa:	e8 e1 a6 ff ff       	call   0x100dd990
100e32af:	6a 03                	push   0x3
100e32b1:	8b ce                	mov    ecx,esi
100e32b3:	e8 58 d0 ff ff       	call   0x100e0310
100e32b8:	85 c0                	test   eax,eax
100e32ba:	74 07                	je     0x100e32c3
100e32bc:	c6 80 f8 01 00 00 01 	mov    BYTE PTR [eax+0x1f8],0x1
100e32c3:	6a 00                	push   0x0
100e32c5:	ff b4 9e fc 21 00 00 	push   DWORD PTR [esi+ebx*4+0x21fc]
100e32cc:	53                   	push   ebx
100e32cd:	e9 66 ff ff ff       	jmp    0x100e3238
100e32d2:	8b 85 f8 fe ff ff    	mov    eax,DWORD PTR [ebp-0x108]
100e32d8:	b9 84 c7 1d 10       	mov    ecx,0x101dc784
100e32dd:	0f 1f 00             	nop    DWORD PTR [eax]
100e32e0:	8a 10                	mov    dl,BYTE PTR [eax]
100e32e2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e32e4:	75 1a                	jne    0x100e3300
100e32e6:	84 d2                	test   dl,dl
100e32e8:	74 12                	je     0x100e32fc
100e32ea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e32ed:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e32f0:	75 0e                	jne    0x100e3300
100e32f2:	83 c0 02             	add    eax,0x2
100e32f5:	83 c1 02             	add    ecx,0x2
100e32f8:	84 d2                	test   dl,dl
100e32fa:	75 e4                	jne    0x100e32e0
100e32fc:	33 c0                	xor    eax,eax
100e32fe:	eb 05                	jmp    0x100e3305
100e3300:	1b c0                	sbb    eax,eax
100e3302:	83 c8 01             	or     eax,0x1
100e3305:	85 c0                	test   eax,eax
100e3307:	0f 85 b7 00 00 00    	jne    0x100e33c4
100e330d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3312:	b9 bc 1d 1d 10       	mov    ecx,0x101d1dbc
100e3317:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100e331d:	8b 84 be fc 21 00 00 	mov    eax,DWORD PTR [esi+edi*4+0x21fc]
100e3324:	89 95 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],edx
100e332a:	03 c2                	add    eax,edx
100e332c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100e3330:	8a 10                	mov    dl,BYTE PTR [eax]
100e3332:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e3334:	75 1a                	jne    0x100e3350
100e3336:	84 d2                	test   dl,dl
100e3338:	74 12                	je     0x100e334c
100e333a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e333d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e3340:	75 0e                	jne    0x100e3350
100e3342:	83 c0 02             	add    eax,0x2
100e3345:	83 c1 02             	add    ecx,0x2
100e3348:	84 d2                	test   dl,dl
100e334a:	75 e4                	jne    0x100e3330
100e334c:	33 c0                	xor    eax,eax
100e334e:	eb 05                	jmp    0x100e3355
100e3350:	1b c0                	sbb    eax,eax
100e3352:	83 c8 01             	or     eax,0x1
100e3355:	85 c0                	test   eax,eax
100e3357:	75 18                	jne    0x100e3371
100e3359:	8b ce                	mov    ecx,esi
100e335b:	e8 e0 a8 ff ff       	call   0x100ddc40
100e3360:	6a 00                	push   0x0
100e3362:	57                   	push   edi
100e3363:	8b ce                	mov    ecx,esi
100e3365:	e8 26 a6 ff ff       	call   0x100dd990
100e336a:	6a 02                	push   0x2
100e336c:	e9 ab fe ff ff       	jmp    0x100e321c
100e3371:	8b 84 9e fc 21 00 00 	mov    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3378:	b9 bc 1d 1d 10       	mov    ecx,0x101d1dbc
100e337d:	03 85 f8 fe ff ff    	add    eax,DWORD PTR [ebp-0x108]
100e3383:	8a 10                	mov    dl,BYTE PTR [eax]
100e3385:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e3387:	75 1a                	jne    0x100e33a3
100e3389:	84 d2                	test   dl,dl
100e338b:	74 12                	je     0x100e339f
100e338d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e3390:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e3393:	75 0e                	jne    0x100e33a3
100e3395:	83 c0 02             	add    eax,0x2
100e3398:	83 c1 02             	add    ecx,0x2
100e339b:	84 d2                	test   dl,dl
100e339d:	75 e4                	jne    0x100e3383
100e339f:	33 c0                	xor    eax,eax
100e33a1:	eb 05                	jmp    0x100e33a8
100e33a3:	1b c0                	sbb    eax,eax
100e33a5:	83 c8 01             	or     eax,0x1
100e33a8:	85 c0                	test   eax,eax
100e33aa:	75 65                	jne    0x100e3411
100e33ac:	8b ce                	mov    ecx,esi
100e33ae:	e8 8d a8 ff ff       	call   0x100ddc40
100e33b3:	6a 00                	push   0x0
100e33b5:	53                   	push   ebx
100e33b6:	8b ce                	mov    ecx,esi
100e33b8:	e8 d3 a5 ff ff       	call   0x100dd990
100e33bd:	6a 02                	push   0x2
100e33bf:	e9 ed fe ff ff       	jmp    0x100e32b1
100e33c4:	6a 00                	push   0x0
100e33c6:	57                   	push   edi
100e33c7:	8b ce                	mov    ecx,esi
100e33c9:	e8 c2 a5 ff ff       	call   0x100dd990
100e33ce:	6a 00                	push   0x0
100e33d0:	53                   	push   ebx
100e33d1:	8b ce                	mov    ecx,esi
100e33d3:	e8 b8 a5 ff ff       	call   0x100dd990
100e33d8:	ff b5 f8 fe ff ff    	push   DWORD PTR [ebp-0x108]
100e33de:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100e33e4:	83 c4 04             	add    esp,0x4
100e33e7:	89 84 be fc 21 00 00 	mov    DWORD PTR [esi+edi*4+0x21fc],eax
100e33ee:	6a 00                	push   0x0
100e33f0:	50                   	push   eax
100e33f1:	e9 41 fe ff ff       	jmp    0x100e3237
100e33f6:	53                   	push   ebx
100e33f7:	57                   	push   edi
100e33f8:	68 3c c7 1d 10       	push   0x101dc73c
100e33fd:	eb 07                	jmp    0x100e3406
100e33ff:	53                   	push   ebx
100e3400:	57                   	push   edi
100e3401:	68 00 c7 1d 10       	push   0x101dc700
100e3406:	6a 01                	push   0x1
100e3408:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e340e:	83 c4 10             	add    esp,0x10
100e3411:	6a 64                	push   0x64
100e3413:	6a 00                	push   0x0
100e3415:	83 ec 08             	sub    esp,0x8
100e3418:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e341f:	3f 
100e3420:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e3427:	68 98 87 1a 10       	push   0x101a8798
100e342c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e342f:	6a 03                	push   0x3
100e3431:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3437:	e8 b4 95 01 00       	call   0x100fc9f0
100e343c:	83 c4 1c             	add    esp,0x1c
100e343f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e3442:	5f                   	pop    edi
100e3443:	5e                   	pop    esi
100e3444:	33 cd                	xor    ecx,ebp
100e3446:	5b                   	pop    ebx
100e3447:	e8 67 a7 05 00       	call   0x1013dbb3
100e344c:	8b e5                	mov    esp,ebp
100e344e:	5d                   	pop    ebp
100e344f:	c2 0c 00             	ret    0xc
