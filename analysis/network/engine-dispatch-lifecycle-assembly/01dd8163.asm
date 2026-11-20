 1dd8163:	55                   	push   ebp
 1dd8164:	8b ec                	mov    ebp,esp
 1dd8166:	b8 e4 01 01 00       	mov    eax,0x101e4
 1dd816b:	e8 00 95 09 00       	call   0x1e71670
 1dd8170:	56                   	push   esi
 1dd8171:	57                   	push   edi
 1dd8172:	6a 14                	push   0x14
 1dd8174:	6a 00                	push   0x0
 1dd8176:	8d 85 20 fe fe ff    	lea    eax,[ebp-0x101e0]
 1dd817c:	50                   	push   eax
 1dd817d:	e8 08 e3 f6 ff       	call   0x1d4648a
 1dd8182:	83 c4 0c             	add    esp,0xc
 1dd8185:	c7 85 20 fe fe ff 34 	mov    DWORD PTR [ebp-0x101e0],0x1ecad34
 1dd818c:	ad ec 01 
 1dd818f:	8d 8d c0 fe fe ff    	lea    ecx,[ebp-0x10140]
 1dd8195:	89 8d 28 fe fe ff    	mov    DWORD PTR [ebp-0x101d8],ecx
 1dd819b:	c7 85 30 fe fe ff 00 	mov    DWORD PTR [ebp-0x101d0],0x0
 1dd81a2:	00 00 00 
 1dd81a5:	c7 85 2c fe fe ff 00 	mov    DWORD PTR [ebp-0x101d4],0x10000
 1dd81ac:	00 01 00 
 1dd81af:	83 3d 1c da d7 02 01 	cmp    DWORD PTR ds:0x2d7da1c,0x1
 1dd81b6:	75 05                	jne    0x1dd81bd
 1dd81b8:	e9 21 03 00 00       	jmp    0x1dd84de
 1dd81bd:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd81c3:	83 7a 04 00          	cmp    DWORD PTR [edx+0x4],0x0
 1dd81c7:	74 0f                	je     0x1dd81d8
 1dd81c9:	a1 1c c1 7f 02       	mov    eax,ds:0x27fc11c
 1dd81ce:	83 38 00             	cmp    DWORD PTR [eax],0x0
 1dd81d1:	75 05                	jne    0x1dd81d8
 1dd81d3:	e9 06 03 00 00       	jmp    0x1dd84de
 1dd81d8:	8b 0d 1c c1 7f 02    	mov    ecx,DWORD PTR ds:0x27fc11c
 1dd81de:	8b 91 9c 4b 00 00    	mov    edx,DWORD PTR [ecx+0x4b9c]
 1dd81e4:	89 95 bc fe fe ff    	mov    DWORD PTR [ebp-0x10144],edx
 1dd81ea:	a1 1c c1 7f 02       	mov    eax,ds:0x27fc11c
 1dd81ef:	c7 40 0c 01 00 00 00 	mov    DWORD PTR [eax+0xc],0x1
 1dd81f6:	8b 0d 1c c1 7f 02    	mov    ecx,DWORD PTR ds:0x27fc11c
 1dd81fc:	8b 15 e0 c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc1e0
 1dd8202:	89 91 78 35 00 00    	mov    DWORD PTR [ecx+0x3578],edx
 1dd8208:	a1 e4 c1 7f 02       	mov    eax,ds:0x27fc1e4
 1dd820d:	89 81 7c 35 00 00    	mov    DWORD PTR [ecx+0x357c],eax
 1dd8213:	8b 0d 1c c1 7f 02    	mov    ecx,DWORD PTR ds:0x27fc11c
 1dd8219:	c7 81 10 50 00 00 00 	mov    DWORD PTR [ecx+0x5010],0x0
 1dd8220:	00 00 00 
 1dd8223:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd8229:	83 c2 7c             	add    edx,0x7c
 1dd822c:	52                   	push   edx
 1dd822d:	e8 94 01 f7 ff       	call   0x1d483c6
 1dd8232:	83 c4 04             	add    esp,0x4
 1dd8235:	a1 1c c1 7f 02       	mov    eax,ds:0x27fc11c
 1dd823a:	05 c0 25 00 00       	add    eax,0x25c0
 1dd823f:	50                   	push   eax
 1dd8240:	e8 81 01 f7 ff       	call   0x1d483c6
 1dd8245:	83 c4 04             	add    esp,0x4
 1dd8248:	8b 0d 1c c1 7f 02    	mov    ecx,DWORD PTR ds:0x27fc11c
 1dd824e:	83 c1 20             	add    ecx,0x20
 1dd8251:	51                   	push   ecx
 1dd8252:	e8 77 6c fb ff       	call   0x1d8eece
 1dd8257:	83 c4 04             	add    esp,0x4
 1dd825a:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd8260:	52                   	push   edx
 1dd8261:	8d 85 20 fe fe ff    	lea    eax,[ebp-0x101e0]
 1dd8267:	50                   	push   eax
 1dd8268:	e8 9b f0 ff ff       	call   0x1dd7308
 1dd826d:	83 c4 08             	add    esp,0x8
 1dd8270:	83 3d ac 88 49 02 00 	cmp    DWORD PTR ds:0x24988ac,0x0
 1dd8277:	74 33                	je     0x1dd82ac
 1dd8279:	8b 0d a8 88 49 02    	mov    ecx,DWORD PTR ds:0x24988a8
 1dd827f:	89 8d 1c fe fe ff    	mov    DWORD PTR [ebp-0x101e4],ecx
 1dd8285:	8b 15 ac 88 49 02    	mov    edx,DWORD PTR ds:0x24988ac
 1dd828b:	89 15 a8 88 49 02    	mov    DWORD PTR ds:0x24988a8,edx
 1dd8291:	8d 85 20 fe fe ff    	lea    eax,[ebp-0x101e0]
 1dd8297:	50                   	push   eax
 1dd8298:	e8 12 fe ff ff       	call   0x1dd80af
 1dd829d:	83 c4 04             	add    esp,0x4
 1dd82a0:	8b 8d 1c fe fe ff    	mov    ecx,DWORD PTR [ebp-0x101e4]
 1dd82a6:	89 0d a8 88 49 02    	mov    DWORD PTR ds:0x24988a8,ecx
 1dd82ac:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd82b2:	c7 42 14 01 00 00 00 	mov    DWORD PTR [edx+0x14],0x1
 1dd82b9:	a1 1c c1 7f 02       	mov    eax,ds:0x27fc11c
 1dd82be:	83 38 00             	cmp    DWORD PTR [eax],0x0
 1dd82c1:	75 0c                	jne    0x1dd82cf
 1dd82c3:	8b 0d 1c c1 7f 02    	mov    ecx,DWORD PTR ds:0x27fc11c
 1dd82c9:	83 79 04 00          	cmp    DWORD PTR [ecx+0x4],0x0
 1dd82cd:	74 24                	je     0x1dd82f3
 1dd82cf:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd82d5:	83 ba 9c 4b 00 00 00 	cmp    DWORD PTR [edx+0x4b9c],0x0
 1dd82dc:	74 15                	je     0x1dd82f3
 1dd82de:	a1 1c c1 7f 02       	mov    eax,ds:0x27fc11c
 1dd82e3:	8b 88 9c 4b 00 00    	mov    ecx,DWORD PTR [eax+0x4b9c]
 1dd82e9:	51                   	push   ecx
 1dd82ea:	ff 15 00 d9 50 02    	call   DWORD PTR ds:0x250d900
 1dd82f0:	83 c4 04             	add    esp,0x4
 1dd82f3:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd82f9:	81 c2 08 4d 00 00    	add    edx,0x4d08
 1dd82ff:	52                   	push   edx
 1dd8300:	68 44 ad ec 01       	push   0x1ecad44
 1dd8305:	6a 40                	push   0x40
 1dd8307:	8d 85 c0 fe ff ff    	lea    eax,[ebp-0x140]
 1dd830d:	50                   	push   eax
 1dd830e:	e8 73 7c 09 00       	call   0x1e6ff86
 1dd8313:	83 c4 10             	add    esp,0x10
 1dd8316:	8b 35 1c c1 7f 02    	mov    esi,DWORD PTR ds:0x27fc11c
 1dd831c:	83 c6 24             	add    esi,0x24
 1dd831f:	83 ec 14             	sub    esp,0x14
 1dd8322:	b9 05 00 00 00       	mov    ecx,0x5
 1dd8327:	8b fc                	mov    edi,esp
 1dd8329:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
 1dd832b:	e8 7d 9e fb ff       	call   0x1d921ad
 1dd8330:	83 c4 14             	add    esp,0x14
 1dd8333:	50                   	push   eax
 1dd8334:	68 48 ad ec 01       	push   0x1ecad48
 1dd8339:	68 00 01 00 00       	push   0x100
 1dd833e:	8d 8d 00 ff ff ff    	lea    ecx,[ebp-0x100]
 1dd8344:	51                   	push   ecx
 1dd8345:	e8 3c 7c 09 00       	call   0x1e6ff86
 1dd834a:	83 c4 10             	add    esp,0x10
 1dd834d:	68 4c ad ec 01       	push   0x1ecad4c
 1dd8352:	68 80 00 00 00       	push   0x80
 1dd8357:	8d 95 34 fe fe ff    	lea    edx,[ebp-0x101cc]
 1dd835d:	52                   	push   edx
 1dd835e:	e8 23 7c 09 00       	call   0x1e6ff86
 1dd8363:	83 c4 0c             	add    esp,0xc
 1dd8366:	8d 85 34 fe fe ff    	lea    eax,[ebp-0x101cc]
 1dd836c:	50                   	push   eax
 1dd836d:	8d 8d 00 ff ff ff    	lea    ecx,[ebp-0x100]
 1dd8373:	51                   	push   ecx
 1dd8374:	8d 95 c0 fe ff ff    	lea    edx,[ebp-0x140]
 1dd837a:	52                   	push   edx
 1dd837b:	8b 85 bc fe fe ff    	mov    eax,DWORD PTR [ebp-0x10144]
 1dd8381:	50                   	push   eax
 1dd8382:	ff 15 fc d8 50 02    	call   DWORD PTR ds:0x250d8fc
 1dd8388:	83 c4 10             	add    esp,0x10
 1dd838b:	85 c0                	test   eax,eax
 1dd838d:	75 5c                	jne    0x1dd83eb
 1dd838f:	6a 09                	push   0x9
 1dd8391:	8b 0d 1c c1 7f 02    	mov    ecx,DWORD PTR ds:0x27fc11c
 1dd8397:	83 c1 7c             	add    ecx,0x7c
 1dd839a:	51                   	push   ecx
 1dd839b:	e8 bf ec f6 ff       	call   0x1d4705f
 1dd83a0:	83 c4 08             	add    esp,0x8
 1dd83a3:	8d 95 34 fe fe ff    	lea    edx,[ebp-0x101cc]
 1dd83a9:	52                   	push   edx
 1dd83aa:	68 6c ad ec 01       	push   0x1ecad6c
 1dd83af:	e8 59 0b f7 ff       	call   0x1d48f0d
 1dd83b4:	83 c4 08             	add    esp,0x8
 1dd83b7:	50                   	push   eax
 1dd83b8:	a1 1c c1 7f 02       	mov    eax,ds:0x27fc11c
 1dd83bd:	83 c0 7c             	add    eax,0x7c
 1dd83c0:	50                   	push   eax
 1dd83c1:	e8 ab ed f6 ff       	call   0x1d47171
 1dd83c6:	83 c4 08             	add    esp,0x8
 1dd83c9:	8d 8d 34 fe fe ff    	lea    ecx,[ebp-0x101cc]
 1dd83cf:	51                   	push   ecx
 1dd83d0:	68 78 ad ec 01       	push   0x1ecad78
 1dd83d5:	6a 00                	push   0x0
 1dd83d7:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd83dd:	52                   	push   edx
 1dd83de:	e8 f3 5e fa ff       	call   0x1d7e2d6
 1dd83e3:	83 c4 10             	add    esp,0x10
 1dd83e6:	e9 f3 00 00 00       	jmp    0x1dd84de
 1dd83eb:	6a 09                	push   0x9
 1dd83ed:	8d 85 20 fe fe ff    	lea    eax,[ebp-0x101e0]
 1dd83f3:	50                   	push   eax
 1dd83f4:	e8 66 ec f6 ff       	call   0x1d4705f
 1dd83f9:	83 c4 08             	add    esp,0x8
 1dd83fc:	e8 7f e0 f6 ff       	call   0x1d46480
 1dd8401:	50                   	push   eax
 1dd8402:	68 a0 ad ec 01       	push   0x1ecada0
 1dd8407:	e8 01 0b f7 ff       	call   0x1d48f0d
 1dd840c:	83 c4 08             	add    esp,0x8
 1dd840f:	50                   	push   eax
 1dd8410:	8d 8d 20 fe fe ff    	lea    ecx,[ebp-0x101e0]
 1dd8416:	51                   	push   ecx
 1dd8417:	e8 55 ed f6 ff       	call   0x1d47171
 1dd841c:	83 c4 08             	add    esp,0x8
 1dd841f:	c7 85 b8 fe fe ff 00 	mov    DWORD PTR [ebp-0x10148],0x0
 1dd8426:	00 00 00 
 1dd8429:	8b 15 24 f3 51 02    	mov    edx,DWORD PTR ds:0x251f324
 1dd842f:	89 95 b4 fe fe ff    	mov    DWORD PTR [ebp-0x1014c],edx
 1dd8435:	eb 21                	jmp    0x1dd8458
 1dd8437:	8b 85 b8 fe fe ff    	mov    eax,DWORD PTR [ebp-0x10148]
 1dd843d:	83 c0 01             	add    eax,0x1
 1dd8440:	89 85 b8 fe fe ff    	mov    DWORD PTR [ebp-0x10148],eax
 1dd8446:	8b 8d b4 fe fe ff    	mov    ecx,DWORD PTR [ebp-0x1014c]
 1dd844c:	81 c1 18 50 00 00    	add    ecx,0x5018
 1dd8452:	89 8d b4 fe fe ff    	mov    DWORD PTR [ebp-0x1014c],ecx
 1dd8458:	8b 95 b8 fe fe ff    	mov    edx,DWORD PTR [ebp-0x10148]
 1dd845e:	3b 15 28 f3 51 02    	cmp    edx,DWORD PTR ds:0x251f328
 1dd8464:	7d 4b                	jge    0x1dd84b1
 1dd8466:	8b 85 b4 fe fe ff    	mov    eax,DWORD PTR [ebp-0x1014c]
 1dd846c:	3b 05 1c c1 7f 02    	cmp    eax,DWORD PTR ds:0x27fc11c
 1dd8472:	74 25                	je     0x1dd8499
 1dd8474:	8b 8d b4 fe fe ff    	mov    ecx,DWORD PTR [ebp-0x1014c]
 1dd847a:	83 39 00             	cmp    DWORD PTR [ecx],0x0
 1dd847d:	75 1a                	jne    0x1dd8499
 1dd847f:	8b 95 b4 fe fe ff    	mov    edx,DWORD PTR [ebp-0x1014c]
 1dd8485:	83 7a 0c 00          	cmp    DWORD PTR [edx+0xc],0x0
 1dd8489:	75 0e                	jne    0x1dd8499
 1dd848b:	8b 85 b4 fe fe ff    	mov    eax,DWORD PTR [ebp-0x1014c]
 1dd8491:	83 78 04 00          	cmp    DWORD PTR [eax+0x4],0x0
 1dd8495:	75 02                	jne    0x1dd8499
 1dd8497:	eb 9e                	jmp    0x1dd8437
 1dd8499:	8d 8d 20 fe fe ff    	lea    ecx,[ebp-0x101e0]
 1dd849f:	51                   	push   ecx
 1dd84a0:	8b 95 b4 fe fe ff    	mov    edx,DWORD PTR [ebp-0x1014c]
 1dd84a6:	52                   	push   edx
 1dd84a7:	e8 40 48 00 00       	call   0x1ddccec
 1dd84ac:	83 c4 08             	add    esp,0x8
 1dd84af:	eb 86                	jmp    0x1dd8437
 1dd84b1:	8d 85 20 fe fe ff    	lea    eax,[ebp-0x101e0]
 1dd84b7:	50                   	push   eax
 1dd84b8:	8b 0d 1c c1 7f 02    	mov    ecx,DWORD PTR ds:0x27fc11c
 1dd84be:	83 c1 20             	add    ecx,0x20
 1dd84c1:	51                   	push   ecx
 1dd84c2:	6a 01                	push   0x1
 1dd84c4:	e8 e4 85 fb ff       	call   0x1d90aad
 1dd84c9:	83 c4 0c             	add    esp,0xc
 1dd84cc:	8b 15 1c c1 7f 02    	mov    edx,DWORD PTR ds:0x27fc11c
 1dd84d2:	83 c2 20             	add    edx,0x20
 1dd84d5:	52                   	push   edx
 1dd84d6:	e8 5b 81 fb ff       	call   0x1d90636
 1dd84db:	83 c4 04             	add    esp,0x4
 1dd84de:	5f                   	pop    edi
 1dd84df:	5e                   	pop    esi
 1dd84e0:	8b e5                	mov    esp,ebp
 1dd84e2:	5d                   	pop    ebp
 1dd84e3:	c3                   	ret
