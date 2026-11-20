10071020:	55                   	push   ebp
10071021:	8b ec                	mov    ebp,esp
10071023:	81 ec 20 02 00 00    	sub    esp,0x220
10071029:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1007102e:	33 c5                	xor    eax,ebp
10071030:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10071033:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10071036:	53                   	push   ebx
10071037:	56                   	push   esi
10071038:	57                   	push   edi
10071039:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1007103c:	50                   	push   eax
1007103d:	e8 0e f8 00 00       	call   0x10080850
10071042:	83 c4 08             	add    esp,0x8
10071045:	e8 16 fa 00 00       	call   0x10080a60
1007104a:	8b f8                	mov    edi,eax
1007104c:	e8 5f f8 00 00       	call   0x100808b0
10071051:	8b d8                	mov    ebx,eax
10071053:	e8 58 f8 00 00       	call   0x100808b0
10071058:	89 85 f4 fd ff ff    	mov    DWORD PTR [ebp-0x20c],eax
1007105e:	e8 ad f8 00 00       	call   0x10080910
10071063:	d9 9d e4 fd ff ff    	fstp   DWORD PTR [ebp-0x21c]
10071069:	e8 a2 f8 00 00       	call   0x10080910
1007106e:	d9 9d e0 fd ff ff    	fstp   DWORD PTR [ebp-0x220]
10071074:	e8 97 f8 00 00       	call   0x10080910
10071079:	d9 9d f8 fd ff ff    	fstp   DWORD PTR [ebp-0x208]
1007107f:	e8 2c f8 00 00       	call   0x100808b0
10071084:	8b f0                	mov    esi,eax
10071086:	e8 85 f9 00 00       	call   0x10080a10
1007108b:	f3 0f 10 85 e0 fd ff 	movss  xmm0,DWORD PTR [ebp-0x220]
10071092:	ff 
10071093:	f3 0f 10 8d e4 fd ff 	movss  xmm1,DWORD PTR [ebp-0x21c]
1007109a:	ff 
1007109b:	f3 0f 11 85 ec fd ff 	movss  DWORD PTR [ebp-0x214],xmm0
100710a2:	ff 
100710a3:	f3 0f 10 85 f8 fd ff 	movss  xmm0,DWORD PTR [ebp-0x208]
100710aa:	ff 
100710ab:	f3 0f 11 8d e8 fd ff 	movss  DWORD PTR [ebp-0x218],xmm1
100710b2:	ff 
100710b3:	f3 0f 11 85 f0 fd ff 	movss  DWORD PTR [ebp-0x210],xmm0
100710ba:	ff 
100710bb:	85 f6                	test   esi,esi
100710bd:	0f 84 6b 01 00 00    	je     0x1007122e
100710c3:	68 d4 96 14 10       	push   0x101496d4
100710c8:	57                   	push   edi
100710c9:	e8 22 2c 06 00       	call   0x100d3cf0
100710ce:	83 c4 08             	add    esp,0x8
100710d1:	85 c0                	test   eax,eax
100710d3:	0f 84 d3 00 00 00    	je     0x100711ac
100710d9:	8b cf                	mov    ecx,edi
100710db:	32 db                	xor    bl,bl
100710dd:	33 f6                	xor    esi,esi
100710df:	33 d2                	xor    edx,edx
100710e1:	8d 41 01             	lea    eax,[ecx+0x1]
100710e4:	89 85 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],eax
100710ea:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100710f0:	8a 01                	mov    al,BYTE PTR [ecx]
100710f2:	41                   	inc    ecx
100710f3:	84 c0                	test   al,al
100710f5:	75 f9                	jne    0x100710f0
100710f7:	2b 8d f8 fd ff ff    	sub    ecx,DWORD PTR [ebp-0x208]
100710fd:	0f 84 a9 00 00 00    	je     0x100711ac
10071103:	8a 04 17             	mov    al,BYTE PTR [edi+edx*1]
10071106:	84 db                	test   bl,bl
10071108:	74 0a                	je     0x10071114
1007110a:	88 84 35 fc fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x204],al
10071111:	46                   	inc    esi
10071112:	eb 0a                	jmp    0x1007111e
10071114:	3c 2f                	cmp    al,0x2f
10071116:	74 04                	je     0x1007111c
10071118:	3c 5c                	cmp    al,0x5c
1007111a:	75 02                	jne    0x1007111e
1007111c:	b3 01                	mov    bl,0x1
1007111e:	8b cf                	mov    ecx,edi
10071120:	42                   	inc    edx
10071121:	8d 41 01             	lea    eax,[ecx+0x1]
10071124:	89 85 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],eax
1007112a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10071130:	8a 01                	mov    al,BYTE PTR [ecx]
10071132:	41                   	inc    ecx
10071133:	84 c0                	test   al,al
10071135:	75 f9                	jne    0x10071130
10071137:	2b 8d f8 fd ff ff    	sub    ecx,DWORD PTR [ebp-0x208]
1007113d:	3b d1                	cmp    edx,ecx
1007113f:	72 c2                	jb     0x10071103
10071141:	84 db                	test   bl,bl
10071143:	74 67                	je     0x100711ac
10071145:	81 fe 00 01 00 00    	cmp    esi,0x100
1007114b:	0f 83 3d 01 00 00    	jae    0x1007128e
10071151:	f3 0f 7e 05 c8 96 14 	movq   xmm0,QWORD PTR ds:0x101496c8
10071158:	10 
10071159:	8d 95 fc fd ff ff    	lea    edx,[ebp-0x204]
1007115f:	88 84 35 fc fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x204],al
10071166:	8b f2                	mov    esi,edx
10071168:	a0 d0 96 14 10       	mov    al,ds:0x101496d0
1007116d:	66 0f d6 85 fc fe ff 	movq   QWORD PTR [ebp-0x104],xmm0
10071174:	ff 
10071175:	88 85 04 ff ff ff    	mov    BYTE PTR [ebp-0xfc],al
1007117b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10071180:	8a 02                	mov    al,BYTE PTR [edx]
10071182:	42                   	inc    edx
10071183:	84 c0                	test   al,al
10071185:	75 f9                	jne    0x10071180
10071187:	8d bd fc fe ff ff    	lea    edi,[ebp-0x104]
1007118d:	2b d6                	sub    edx,esi
1007118f:	4f                   	dec    edi
10071190:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10071193:	47                   	inc    edi
10071194:	84 c0                	test   al,al
10071196:	75 f8                	jne    0x10071190
10071198:	8b ca                	mov    ecx,edx
1007119a:	c1 e9 02             	shr    ecx,0x2
1007119d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1007119f:	8b ca                	mov    ecx,edx
100711a1:	83 e1 03             	and    ecx,0x3
100711a4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100711a6:	8d bd fc fe ff ff    	lea    edi,[ebp-0x104]
100711ac:	68 cc ed 14 10       	push   0x1014edcc
100711b1:	57                   	push   edi
100711b2:	e8 39 2b 06 00       	call   0x100d3cf0
100711b7:	83 c4 08             	add    esp,0x8
100711ba:	85 c0                	test   eax,eax
100711bc:	75 2b                	jne    0x100711e9
100711be:	68 d4 ed 14 10       	push   0x1014edd4
100711c3:	57                   	push   edi
100711c4:	e8 27 2b 06 00       	call   0x100d3cf0
100711c9:	83 c4 08             	add    esp,0x8
100711cc:	85 c0                	test   eax,eax
100711ce:	75 19                	jne    0x100711e9
100711d0:	6a 64                	push   0x64
100711d2:	50                   	push   eax
100711d3:	83 ec 08             	sub    esp,0x8
100711d6:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100711dd:	3f 
100711de:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100711e5:	57                   	push   edi
100711e6:	50                   	push   eax
100711e7:	eb 19                	jmp    0x10071202
100711e9:	6a 64                	push   0x64
100711eb:	6a 00                	push   0x0
100711ed:	83 ec 08             	sub    esp,0x8
100711f0:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100711f7:	3f 
100711f8:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100711ff:	57                   	push   edi
10071200:	6a 01                	push   0x1
10071202:	8d 85 e8 fd ff ff    	lea    eax,[ebp-0x218]
10071208:	50                   	push   eax
10071209:	a1 58 27 1b 10       	mov    eax,ds:0x101b2758
1007120e:	6a 00                	push   0x0
10071210:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10071213:	ff d0                	call   eax
10071215:	83 c4 20             	add    esp,0x20
10071218:	b8 01 00 00 00       	mov    eax,0x1
1007121d:	5f                   	pop    edi
1007121e:	5e                   	pop    esi
1007121f:	5b                   	pop    ebx
10071220:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10071223:	33 cd                	xor    ecx,ebp
10071225:	e8 96 30 04 00       	call   0x100b42c0
1007122a:	8b e5                	mov    esp,ebp
1007122c:	5d                   	pop    ebp
1007122d:	c3                   	ret
1007122e:	32 c0                	xor    al,al
10071230:	be 01 00 00 00       	mov    esi,0x1
10071235:	83 bd f4 fd ff ff 00 	cmp    DWORD PTR [ebp-0x20c],0x0
1007123c:	0f b6 c0             	movzx  eax,al
1007123f:	0f 45 c6             	cmovne eax,esi
10071242:	83 ec 0c             	sub    esp,0xc
10071245:	8b cc                	mov    ecx,esp
10071247:	88 85 f4 fd ff ff    	mov    BYTE PTR [ebp-0x20c],al
1007124d:	ff b5 f4 fd ff ff    	push   DWORD PTR [ebp-0x20c]
10071253:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
10071257:	f3 0f 10 85 ec fd ff 	movss  xmm0,DWORD PTR [ebp-0x214]
1007125e:	ff 
1007125f:	f3 0f 11 41 04       	movss  DWORD PTR [ecx+0x4],xmm0
10071264:	f3 0f 10 85 f0 fd ff 	movss  xmm0,DWORD PTR [ebp-0x210]
1007126b:	ff 
1007126c:	53                   	push   ebx
1007126d:	57                   	push   edi
1007126e:	f3 0f 11 41 08       	movss  DWORD PTR [ecx+0x8],xmm0
10071273:	e8 98 e8 00 00       	call   0x1007fb10
10071278:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1007127b:	83 c4 18             	add    esp,0x18
1007127e:	8b c6                	mov    eax,esi
10071280:	33 cd                	xor    ecx,ebp
10071282:	5f                   	pop    edi
10071283:	5e                   	pop    esi
10071284:	5b                   	pop    ebx
10071285:	e8 36 30 04 00       	call   0x100b42c0
1007128a:	8b e5                	mov    esp,ebp
1007128c:	5d                   	pop    ebp
1007128d:	c3                   	ret
1007128e:	e8 1b 39 04 00       	call   0x100b4bae
