
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008e010 <.text+0x8d010>:
1008e010:	55                   	push   ebp
1008e011:	8b ec                	mov    ebp,esp
1008e013:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
1008e017:	74 0a                	je     0x1008e023
1008e019:	f3 0f 10 05 d8 1d 1a 	movss  xmm0,DWORD PTR ds:0x101a1dd8
1008e020:	10 
1008e021:	eb 08                	jmp    0x1008e02b
1008e023:	f3 0f 10 05 a0 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ea0
1008e02a:	10 
1008e02b:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
1008e02f:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1008e035:	53                   	push   ebx
1008e036:	56                   	push   esi
1008e037:	57                   	push   edi
1008e038:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1008e03b:	f3 0f 11 45 14       	movss  DWORD PTR [ebp+0x14],xmm0
1008e040:	0f 84 f2 00 00 00    	je     0x1008e138
1008e046:	8b 17                	mov    edx,DWORD PTR [edi]
1008e048:	85 d2                	test   edx,edx
1008e04a:	74 11                	je     0x1008e05d
1008e04c:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1008e050:	0f 2f 47 18          	comiss xmm0,DWORD PTR [edi+0x18]
1008e054:	76 07                	jbe    0x1008e05d
1008e056:	b8 01 00 00 00       	mov    eax,0x1
1008e05b:	eb 02                	jmp    0x1008e05f
1008e05d:	33 c0                	xor    eax,eax
1008e05f:	83 7f 04 00          	cmp    DWORD PTR [edi+0x4],0x0
1008e063:	74 17                	je     0x1008e07c
1008e065:	80 7f 20 00          	cmp    BYTE PTR [edi+0x20],0x0
1008e069:	75 11                	jne    0x1008e07c
1008e06b:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1008e06f:	0f 2f 47 1c          	comiss xmm0,DWORD PTR [edi+0x1c]
1008e073:	76 07                	jbe    0x1008e07c
1008e075:	be 01 00 00 00       	mov    esi,0x1
1008e07a:	eb 02                	jmp    0x1008e07e
1008e07c:	33 f6                	xor    esi,esi
1008e07e:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1008e081:	85 c0                	test   eax,eax
1008e083:	74 0e                	je     0x1008e093
1008e085:	85 f6                	test   esi,esi
1008e087:	74 0a                	je     0x1008e093
1008e089:	f3 0f 10 05 74 e0 1a 	movss  xmm0,DWORD PTR ds:0x101ae074
1008e090:	10 
1008e091:	eb 0c                	jmp    0x1008e09f
1008e093:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1008e09a:	10 
1008e09b:	85 c0                	test   eax,eax
1008e09d:	74 46                	je     0x1008e0e5
1008e09f:	8b 81 98 00 00 00    	mov    eax,DWORD PTR [ecx+0x98]
1008e0a5:	6a 64                	push   0x64
1008e0a7:	6a 00                	push   0x0
1008e0a9:	83 ec 08             	sub    esp,0x8
1008e0ac:	03 c2                	add    eax,edx
1008e0ae:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008e0b5:	3f 
1008e0b6:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008e0bb:	50                   	push   eax
1008e0bc:	6a 03                	push   0x3
1008e0be:	ff b3 0c 02 00 00    	push   DWORD PTR [ebx+0x20c]
1008e0c4:	e8 27 e9 06 00       	call   0x100fc9f0
1008e0c9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e0ce:	83 c4 1c             	add    esp,0x1c
1008e0d1:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1008e0d6:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
1008e0da:	f3 0f 11 47 18       	movss  DWORD PTR [edi+0x18],xmm0
1008e0df:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1008e0e5:	85 f6                	test   esi,esi
1008e0e7:	0f 84 4b 01 00 00    	je     0x1008e238
1008e0ed:	8b 77 10             	mov    esi,DWORD PTR [edi+0x10]
1008e0f0:	8b 81 98 00 00 00    	mov    eax,DWORD PTR [ecx+0x98]
1008e0f6:	03 47 04             	add    eax,DWORD PTR [edi+0x4]
1008e0f9:	6a 00                	push   0x0
1008e0fb:	56                   	push   esi
1008e0fc:	6a 64                	push   0x64
1008e0fe:	6a 00                	push   0x0
1008e100:	83 ec 08             	sub    esp,0x8
1008e103:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008e10a:	3f 
1008e10b:	c7 04 24 9a 99 59 3f 	mov    DWORD PTR [esp],0x3f59999a
1008e112:	50                   	push   eax
1008e113:	ff b3 0c 02 00 00    	push   DWORD PTR [ebx+0x20c]
1008e119:	e8 f2 03 07 00       	call   0x100fe510
1008e11e:	83 c4 20             	add    esp,0x20
1008e121:	89 47 10             	mov    DWORD PTR [edi+0x10],eax
1008e124:	3b f0                	cmp    esi,eax
1008e126:	c7 47 14 00 00 00 00 	mov    DWORD PTR [edi+0x14],0x0
1008e12d:	0f 94 c0             	sete   al
1008e130:	88 47 20             	mov    BYTE PTR [edi+0x20],al
1008e133:	e9 ea 00 00 00       	jmp    0x1008e222
1008e138:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
1008e13b:	85 d2                	test   edx,edx
1008e13d:	74 11                	je     0x1008e150
1008e13f:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1008e143:	0f 2f 47 18          	comiss xmm0,DWORD PTR [edi+0x18]
1008e147:	76 07                	jbe    0x1008e150
1008e149:	b8 01 00 00 00       	mov    eax,0x1
1008e14e:	eb 02                	jmp    0x1008e152
1008e150:	33 c0                	xor    eax,eax
1008e152:	83 7f 0c 00          	cmp    DWORD PTR [edi+0xc],0x0
1008e156:	74 17                	je     0x1008e16f
1008e158:	80 7f 21 00          	cmp    BYTE PTR [edi+0x21],0x0
1008e15c:	75 11                	jne    0x1008e16f
1008e15e:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1008e162:	0f 2f 47 1c          	comiss xmm0,DWORD PTR [edi+0x1c]
1008e166:	76 07                	jbe    0x1008e16f
1008e168:	be 01 00 00 00       	mov    esi,0x1
1008e16d:	eb 02                	jmp    0x1008e171
1008e16f:	33 f6                	xor    esi,esi
1008e171:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1008e174:	85 c0                	test   eax,eax
1008e176:	74 0e                	je     0x1008e186
1008e178:	85 f6                	test   esi,esi
1008e17a:	74 0a                	je     0x1008e186
1008e17c:	f3 0f 10 05 74 e0 1a 	movss  xmm0,DWORD PTR ds:0x101ae074
1008e183:	10 
1008e184:	eb 0c                	jmp    0x1008e192
1008e186:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1008e18d:	10 
1008e18e:	85 c0                	test   eax,eax
1008e190:	74 46                	je     0x1008e1d8
1008e192:	8b 81 98 00 00 00    	mov    eax,DWORD PTR [ecx+0x98]
1008e198:	6a 64                	push   0x64
1008e19a:	6a 00                	push   0x0
1008e19c:	83 ec 08             	sub    esp,0x8
1008e19f:	03 c2                	add    eax,edx
1008e1a1:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008e1a8:	3f 
1008e1a9:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008e1ae:	50                   	push   eax
1008e1af:	6a 03                	push   0x3
1008e1b1:	ff b3 0c 02 00 00    	push   DWORD PTR [ebx+0x20c]
1008e1b7:	e8 34 e8 06 00       	call   0x100fc9f0
1008e1bc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e1c1:	83 c4 1c             	add    esp,0x1c
1008e1c4:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1008e1c9:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
1008e1cd:	f3 0f 11 47 18       	movss  DWORD PTR [edi+0x18],xmm0
1008e1d2:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1008e1d8:	85 f6                	test   esi,esi
1008e1da:	74 5c                	je     0x1008e238
1008e1dc:	8b 77 14             	mov    esi,DWORD PTR [edi+0x14]
1008e1df:	8b 81 98 00 00 00    	mov    eax,DWORD PTR [ecx+0x98]
1008e1e5:	03 47 0c             	add    eax,DWORD PTR [edi+0xc]
1008e1e8:	6a 00                	push   0x0
1008e1ea:	56                   	push   esi
1008e1eb:	6a 64                	push   0x64
1008e1ed:	6a 00                	push   0x0
1008e1ef:	83 ec 08             	sub    esp,0x8
1008e1f2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008e1f9:	3f 
1008e1fa:	c7 04 24 9a 99 59 3f 	mov    DWORD PTR [esp],0x3f59999a
1008e201:	50                   	push   eax
1008e202:	ff b3 0c 02 00 00    	push   DWORD PTR [ebx+0x20c]
1008e208:	e8 03 03 07 00       	call   0x100fe510
1008e20d:	83 c4 20             	add    esp,0x20
1008e210:	89 47 14             	mov    DWORD PTR [edi+0x14],eax
1008e213:	3b f0                	cmp    esi,eax
1008e215:	c7 47 10 00 00 00 00 	mov    DWORD PTR [edi+0x10],0x0
1008e21c:	0f 94 c0             	sete   al
1008e21f:	88 47 21             	mov    BYTE PTR [edi+0x21],al
1008e222:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e227:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1008e22b:	f3 0f 58 05 1c 5e 1a 	addss  xmm0,DWORD PTR ds:0x101a5e1c
1008e232:	10 
1008e233:	f3 0f 11 47 1c       	movss  DWORD PTR [edi+0x1c],xmm0
1008e238:	5f                   	pop    edi
1008e239:	5e                   	pop    esi
1008e23a:	5b                   	pop    ebx
1008e23b:	5d                   	pop    ebp
1008e23c:	c3                   	ret
