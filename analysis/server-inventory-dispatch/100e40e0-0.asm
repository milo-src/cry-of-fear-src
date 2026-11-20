
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e40e0 <.text+0xe30e0>:
100e40e0:	55                   	push   ebp
100e40e1:	8b ec                	mov    ebp,esp
100e40e3:	81 ec 88 00 00 00    	sub    esp,0x88
100e40e9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100e40ee:	33 c5                	xor    eax,ebp
100e40f0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e40f3:	56                   	push   esi
100e40f4:	8b f1                	mov    esi,ecx
100e40f6:	57                   	push   edi
100e40f7:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100e40fa:	80 be e8 1e 00 00 00 	cmp    BYTE PTR [esi+0x1ee8],0x0
100e4101:	0f 85 d1 01 00 00    	jne    0x100e42d8
100e4107:	e8 c4 0d 00 00       	call   0x100e4ed0
100e410c:	85 c0                	test   eax,eax
100e410e:	0f 85 c4 01 00 00    	jne    0x100e42d8
100e4114:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100e4117:	f3 0f 10 82 60 02 00 	movss  xmm0,DWORD PTR [edx+0x260]
100e411e:	00 
100e411f:	0f 2e 05 e0 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1ee0
100e4126:	9f                   	lahf
100e4127:	f6 c4 44             	test   ah,0x44
100e412a:	0f 8b a8 01 00 00    	jnp    0x100e42d8
100e4130:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e4135:	53                   	push   ebx
100e4136:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
100e413c:	03 9c be fc 21 00 00 	add    ebx,DWORD PTR [esi+edi*4+0x21fc]
100e4143:	8b cb                	mov    ecx,ebx
100e4145:	8d 41 01             	lea    eax,[ecx+0x1]
100e4148:	89 85 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],eax
100e414e:	66 90                	xchg   ax,ax
100e4150:	8a 01                	mov    al,BYTE PTR [ecx]
100e4152:	41                   	inc    ecx
100e4153:	84 c0                	test   al,al
100e4155:	75 f9                	jne    0x100e4150
100e4157:	2b 8d 78 ff ff ff    	sub    ecx,DWORD PTR [ebp-0x88]
100e415d:	83 f9 01             	cmp    ecx,0x1
100e4160:	77 28                	ja     0x100e418a
100e4162:	6a 64                	push   0x64
100e4164:	6a 00                	push   0x0
100e4166:	83 ec 08             	sub    esp,0x8
100e4169:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e4170:	3f 
100e4171:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e4178:	68 98 87 1a 10       	push   0x101a8798
100e417d:	6a 03                	push   0x3
100e417f:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
100e4185:	e9 45 01 00 00       	jmp    0x100e42cf
100e418a:	53                   	push   ebx
100e418b:	68 fc 72 1a 10       	push   0x101a72fc
100e4190:	8b ce                	mov    ecx,esi
100e4192:	e8 d9 bd ff ff       	call   0x100dff70
100e4197:	8d 50 01             	lea    edx,[eax+0x1]
100e419a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100e41a0:	8a 08                	mov    cl,BYTE PTR [eax]
100e41a2:	40                   	inc    eax
100e41a3:	84 c9                	test   cl,cl
100e41a5:	75 f9                	jne    0x100e41a0
100e41a7:	2b c2                	sub    eax,edx
100e41a9:	83 f8 01             	cmp    eax,0x1
100e41ac:	76 34                	jbe    0x100e41e2
100e41ae:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e41b3:	8b ce                	mov    ecx,esi
100e41b5:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e41bb:	03 84 be fc 21 00 00 	add    eax,DWORD PTR [esi+edi*4+0x21fc]
100e41c2:	50                   	push   eax
100e41c3:	68 fc 72 1a 10       	push   0x101a72fc
100e41c8:	e8 a3 bd ff ff       	call   0x100dff70
100e41cd:	50                   	push   eax
100e41ce:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e41d4:	68 4c 12 1a 10       	push   0x101a124c
100e41d9:	50                   	push   eax
100e41da:	e8 81 af f3 ff       	call   0x1001f160
100e41df:	83 c4 0c             	add    esp,0xc
100e41e2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e41e7:	8b ce                	mov    ecx,esi
100e41e9:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e41ef:	03 84 be fc 21 00 00 	add    eax,DWORD PTR [esi+edi*4+0x21fc]
100e41f6:	50                   	push   eax
100e41f7:	68 fc 72 1a 10       	push   0x101a72fc
100e41fc:	e8 6f bd ff ff       	call   0x100dff70
100e4201:	b9 cc e8 1a 10       	mov    ecx,0x101ae8cc
100e4206:	8a 11                	mov    dl,BYTE PTR [ecx]
100e4208:	3a 10                	cmp    dl,BYTE PTR [eax]
100e420a:	75 1a                	jne    0x100e4226
100e420c:	84 d2                	test   dl,dl
100e420e:	74 12                	je     0x100e4222
100e4210:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e4213:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e4216:	75 0e                	jne    0x100e4226
100e4218:	83 c1 02             	add    ecx,0x2
100e421b:	83 c0 02             	add    eax,0x2
100e421e:	84 d2                	test   dl,dl
100e4220:	75 e4                	jne    0x100e4206
100e4222:	33 c0                	xor    eax,eax
100e4224:	eb 05                	jmp    0x100e422b
100e4226:	1b c0                	sbb    eax,eax
100e4228:	83 c8 01             	or     eax,0x1
100e422b:	8b ce                	mov    ecx,esi
100e422d:	85 c0                	test   eax,eax
100e422f:	75 19                	jne    0x100e424a
100e4231:	57                   	push   edi
100e4232:	e8 d9 01 00 00       	call   0x100e4410
100e4237:	5b                   	pop    ebx
100e4238:	5f                   	pop    edi
100e4239:	5e                   	pop    esi
100e423a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e423d:	33 cd                	xor    ecx,ebp
100e423f:	e8 6f 99 05 00       	call   0x1013dbb3
100e4244:	8b e5                	mov    esp,ebp
100e4246:	5d                   	pop    ebp
100e4247:	c2 04 00             	ret    0x4
100e424a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e424f:	6a 07                	push   0x7
100e4251:	68 90 87 1a 10       	push   0x101a8790
100e4256:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e425c:	03 84 be fc 21 00 00 	add    eax,DWORD PTR [esi+edi*4+0x21fc]
100e4263:	50                   	push   eax
100e4264:	68 fc 72 1a 10       	push   0x101a72fc
100e4269:	e8 02 bd ff ff       	call   0x100dff70
100e426e:	50                   	push   eax
100e426f:	e8 0c b4 08 00       	call   0x1016f680
100e4274:	83 c4 0c             	add    esp,0xc
100e4277:	85 c0                	test   eax,eax
100e4279:	75 5c                	jne    0x100e42d7
100e427b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e4280:	8b ce                	mov    ecx,esi
100e4282:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e4288:	03 84 be fc 21 00 00 	add    eax,DWORD PTR [esi+edi*4+0x21fc]
100e428f:	50                   	push   eax
100e4290:	68 fc 72 1a 10       	push   0x101a72fc
100e4295:	e8 d6 bc ff ff       	call   0x100dff70
100e429a:	50                   	push   eax
100e429b:	8b ce                	mov    ecx,esi
100e429d:	e8 ae d7 00 00       	call   0x100f1a50
100e42a2:	8b ce                	mov    ecx,esi
100e42a4:	e8 97 99 ff ff       	call   0x100ddc40
100e42a9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e42ac:	6a 64                	push   0x64
100e42ae:	6a 00                	push   0x0
100e42b0:	83 ec 08             	sub    esp,0x8
100e42b3:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e42ba:	3f 
100e42bb:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e42c2:	68 98 95 1a 10       	push   0x101a9598
100e42c7:	6a 03                	push   0x3
100e42c9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e42cf:	e8 1c 87 01 00       	call   0x100fc9f0
100e42d4:	83 c4 1c             	add    esp,0x1c
100e42d7:	5b                   	pop    ebx
100e42d8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e42db:	5f                   	pop    edi
100e42dc:	33 cd                	xor    ecx,ebp
100e42de:	5e                   	pop    esi
100e42df:	e8 cf 98 05 00       	call   0x1013dbb3
100e42e4:	8b e5                	mov    esp,ebp
100e42e6:	5d                   	pop    ebp
100e42e7:	c2 04 00             	ret    0x4
