
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e9ff0 <.text+0xe8ff0>:
100e9ff0:	55                   	push   ebp
100e9ff1:	8b ec                	mov    ebp,esp
100e9ff3:	51                   	push   ecx
100e9ff4:	53                   	push   ebx
100e9ff5:	56                   	push   esi
100e9ff6:	57                   	push   edi
100e9ff7:	68 ec c8 1d 10       	push   0x101dc8ec
100e9ffc:	6a 00                	push   0x0
100e9ffe:	8b f9                	mov    edi,ecx
100ea000:	e8 5b e4 02 00       	call   0x10118460
100ea005:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100ea008:	83 c4 08             	add    esp,0x8
100ea00b:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ea00e:	85 c0                	test   eax,eax
100ea010:	74 5a                	je     0x100ea06c
100ea012:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100ea015:	ff 70 04             	push   DWORD PTR [eax+0x4]
100ea018:	8b b1 0c 02 00 00    	mov    esi,DWORD PTR [ecx+0x20c]
100ea01e:	e8 bd 6e fa ff       	call   0x10090ee0
100ea023:	83 c4 04             	add    esp,0x4
100ea026:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ea029:	53                   	push   ebx
100ea02a:	89 b0 9c 01 00 00    	mov    DWORD PTR [eax+0x19c],esi
100ea030:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100ea033:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100ea036:	51                   	push   ecx
100ea037:	f3 0f 10 81 68 01 00 	movss  xmm0,DWORD PTR [ecx+0x168]
100ea03e:	00 
100ea03f:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100ea046:	9f                   	lahf
100ea047:	f6 c4 44             	test   ah,0x44
100ea04a:	7a 11                	jp     0x100ea05d
100ea04c:	e8 8f 6e fa ff       	call   0x10090ee0
100ea051:	83 c4 04             	add    esp,0x4
100ea054:	8b c8                	mov    ecx,eax
100ea056:	e8 75 7c fb ff       	call   0x100a1cd0
100ea05b:	eb 0f                	jmp    0x100ea06c
100ea05d:	e8 7e 6e fa ff       	call   0x10090ee0
100ea062:	83 c4 04             	add    esp,0x4
100ea065:	8b c8                	mov    ecx,eax
100ea067:	e8 04 a2 fa ff       	call   0x10094270
100ea06c:	80 bf 99 03 00 00 00 	cmp    BYTE PTR [edi+0x399],0x0
100ea073:	0f 85 65 01 00 00    	jne    0x100ea1de
100ea079:	80 bf e8 1e 00 00 00 	cmp    BYTE PTR [edi+0x1ee8],0x0
100ea080:	0f 85 58 01 00 00    	jne    0x100ea1de
100ea086:	8b b7 2c 25 00 00    	mov    esi,DWORD PTR [edi+0x252c]
100ea08c:	85 f6                	test   esi,esi
100ea08e:	0f 84 4a 01 00 00    	je     0x100ea1de
100ea094:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ea097:	ba 50 de 1a 10       	mov    edx,0x101ade50
100ea09c:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100ea0a2:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100ea0a8:	f7 d9                	neg    ecx
100ea0aa:	1b c9                	sbb    ecx,ecx
100ea0ac:	23 c8                	and    ecx,eax
100ea0ae:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ea0b3:	8b 09                	mov    ecx,DWORD PTR [ecx]
100ea0b5:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100ea0bb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100ea0c0:	8a 01                	mov    al,BYTE PTR [ecx]
100ea0c2:	3a 02                	cmp    al,BYTE PTR [edx]
100ea0c4:	75 1a                	jne    0x100ea0e0
100ea0c6:	84 c0                	test   al,al
100ea0c8:	74 12                	je     0x100ea0dc
100ea0ca:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ea0cd:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100ea0d0:	75 0e                	jne    0x100ea0e0
100ea0d2:	83 c1 02             	add    ecx,0x2
100ea0d5:	83 c2 02             	add    edx,0x2
100ea0d8:	84 c0                	test   al,al
100ea0da:	75 e4                	jne    0x100ea0c0
100ea0dc:	33 c0                	xor    eax,eax
100ea0de:	eb 05                	jmp    0x100ea0e5
100ea0e0:	1b c0                	sbb    eax,eax
100ea0e2:	83 c8 01             	or     eax,0x1
100ea0e5:	85 c0                	test   eax,eax
100ea0e7:	0f 85 f1 00 00 00    	jne    0x100ea1de
100ea0ed:	81 fb 8f 03 00 00    	cmp    ebx,0x38f
100ea0f3:	74 09                	je     0x100ea0fe
100ea0f5:	83 fb 70             	cmp    ebx,0x70
100ea0f8:	0f 85 e0 00 00 00    	jne    0x100ea1de
100ea0fe:	c6 87 99 03 00 00 01 	mov    BYTE PTR [edi+0x399],0x1
100ea105:	ff 76 04             	push   DWORD PTR [esi+0x4]
100ea108:	e8 23 8d f6 ff       	call   0x10052e30
100ea10d:	83 c4 04             	add    esp,0x4
100ea110:	8b f0                	mov    esi,eax
100ea112:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100ea115:	6a 64                	push   0x64
100ea117:	6a 00                	push   0x0
100ea119:	83 ec 08             	sub    esp,0x8
100ea11c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100ea123:	3f 
100ea124:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100ea12b:	68 28 2a 1b 10       	push   0x101b2a28
100ea130:	6a 00                	push   0x0
100ea132:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ea138:	e8 b3 28 01 00       	call   0x100fc9f0
100ea13d:	83 8f 00 25 00 00 08 	or     DWORD PTR [edi+0x2500],0x8
100ea144:	83 c4 1c             	add    esp,0x1c
100ea147:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100ea14a:	8b ce                	mov    ecx,esi
100ea14c:	c7 87 b4 1e 00 00 01 	mov    DWORD PTR [edi+0x1eb4],0x1
100ea153:	00 00 00 
100ea156:	6a 00                	push   0x0
100ea158:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x40a00000
100ea15f:	00 a0 40 
100ea162:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ea167:	83 bf 98 1e 00 00 00 	cmp    DWORD PTR [edi+0x1e98],0x0
100ea16e:	6a 01                	push   0x1
100ea170:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ea174:	f3 0f 58 05 b8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1eb8
100ea17b:	10 
100ea17c:	f3 0f 11 87 08 03 00 	movss  DWORD PTR [edi+0x308],xmm0
100ea183:	00 
100ea184:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ea189:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ea18d:	8b 06                	mov    eax,DWORD PTR [esi]
100ea18f:	0f 5a c0             	cvtps2pd xmm0,xmm0
100ea192:	f2 0f 58 05 f0 5f 1b 	addsd  xmm0,QWORD PTR ds:0x101b5ff0
100ea199:	10 
100ea19a:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100ea19e:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
100ea1a5:	00 
100ea1a6:	74 04                	je     0x100ea1ac
100ea1a8:	6a 0d                	push   0xd
100ea1aa:	eb 02                	jmp    0x100ea1ae
100ea1ac:	6a 0c                	push   0xc
100ea1ae:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
100ea1b4:	c6 87 e8 1e 00 00 01 	mov    BYTE PTR [edi+0x1ee8],0x1
100ea1bb:	c7 87 a0 03 00 00 01 	mov    DWORD PTR [edi+0x3a0],0x1
100ea1c2:	00 00 00 
100ea1c5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ea1ca:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ea1ce:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100ea1d5:	10 
100ea1d6:	f3 0f 11 87 9c 03 00 	movss  DWORD PTR [edi+0x39c],xmm0
100ea1dd:	00 
100ea1de:	5f                   	pop    edi
100ea1df:	5e                   	pop    esi
100ea1e0:	5b                   	pop    ebx
100ea1e1:	8b e5                	mov    esp,ebp
100ea1e3:	5d                   	pop    ebp
100ea1e4:	c2 04 00             	ret    0x4
