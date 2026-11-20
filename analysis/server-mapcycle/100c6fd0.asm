
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c6fd0 <.text+0xc5fd0>:
100c6fd0:	55                   	push   ebp
100c6fd1:	8b ec                	mov    ebp,esp
100c6fd3:	81 ec 04 0c 00 00    	sub    esp,0xc04
100c6fd9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c6fde:	33 c5                	xor    eax,ebp
100c6fe0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100c6fe3:	a1 70 65 1d 10       	mov    eax,ds:0x101d6570
100c6fe8:	53                   	push   ebx
100c6fe9:	56                   	push   esi
100c6fea:	57                   	push   edi
100c6feb:	89 45 bc             	mov    DWORD PTR [ebp-0x44],eax
100c6fee:	33 ff                	xor    edi,edi
100c6ff0:	66 a1 74 65 1d 10    	mov    ax,ds:0x101d6574
100c6ff6:	68 78 65 1d 10       	push   0x101d6578
100c6ffb:	c7 85 00 f4 ff ff 00 	mov    DWORD PTR [ebp-0xc00],0x0
100c7002:	00 00 00 
100c7005:	89 bd fc f3 ff ff    	mov    DWORD PTR [ebp-0xc04],edi
100c700b:	66 89 45 c0          	mov    WORD PTR [ebp-0x40],ax
100c700f:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100c7015:	8b f0                	mov    esi,eax
100c7017:	c6 85 04 f4 ff ff 00 	mov    BYTE PTR [ebp-0xbfc],0x0
100c701e:	c6 85 e0 f9 ff ff 00 	mov    BYTE PTR [ebp-0x620],0x0
100c7025:	e8 16 0d 00 00       	call   0x100c7d40
100c702a:	68 a8 37 22 10       	push   0x102237a8
100c702f:	56                   	push   esi
100c7030:	8b d8                	mov    ebx,eax
100c7032:	e8 84 4c 0b 00       	call   0x1017bcbb
100c7037:	83 c4 0c             	add    esp,0xc
100c703a:	85 c0                	test   eax,eax
100c703c:	74 50                	je     0x100c708e
100c703e:	ba a8 37 22 10       	mov    edx,0x102237a8
100c7043:	8b ce                	mov    ecx,esi
100c7045:	2b d6                	sub    edx,esi
100c7047:	8a 01                	mov    al,BYTE PTR [ecx]
100c7049:	8d 49 01             	lea    ecx,[ecx+0x1]
100c704c:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c7050:	84 c0                	test   al,al
100c7052:	75 f3                	jne    0x100c7047
100c7054:	68 a8 38 22 10       	push   0x102238a8
100c7059:	e8 c2 14 00 00       	call   0x100c8520
100c705e:	68 a8 38 22 10       	push   0x102238a8
100c7063:	56                   	push   esi
100c7064:	e8 f7 25 00 00       	call   0x100c9660
100c7069:	83 c4 0c             	add    esp,0xc
100c706c:	85 c0                	test   eax,eax
100c706e:	74 08                	je     0x100c7078
100c7070:	39 3d a8 38 22 10    	cmp    DWORD PTR ds:0x102238a8,edi
100c7076:	75 22                	jne    0x100c709a
100c7078:	56                   	push   esi
100c7079:	68 88 65 1d 10       	push   0x101d6588
100c707e:	6a 01                	push   0x1
100c7080:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c7086:	83 c4 0c             	add    esp,0xc
100c7089:	e9 f5 00 00 00       	jmp    0x100c7183
100c708e:	39 3d a8 38 22 10    	cmp    DWORD PTR ds:0x102238a8,edi
100c7094:	0f 84 e9 00 00 00    	je     0x100c7183
100c709a:	8b 35 88 31 22 10    	mov    esi,DWORD PTR ds:0x10223188
100c70a0:	8d 55 dc             	lea    edx,[ebp-0x24]
100c70a3:	33 ff                	xor    edi,edi
100c70a5:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100c70a8:	03 8e 98 00 00 00    	add    ecx,DWORD PTR [esi+0x98]
100c70ae:	66 90                	xchg   ax,ax
100c70b0:	8a 01                	mov    al,BYTE PTR [ecx]
100c70b2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c70b5:	88 02                	mov    BYTE PTR [edx],al
100c70b7:	8d 52 01             	lea    edx,[edx+0x1]
100c70ba:	84 c0                	test   al,al
100c70bc:	75 f2                	jne    0x100c70b0
100c70be:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100c70c1:	8d 55 bc             	lea    edx,[ebp-0x44]
100c70c4:	03 8e 98 00 00 00    	add    ecx,DWORD PTR [esi+0x98]
100c70ca:	2b d1                	sub    edx,ecx
100c70cc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c70d0:	8a 01                	mov    al,BYTE PTR [ecx]
100c70d2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c70d5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c70d9:	84 c0                	test   al,al
100c70db:	75 f3                	jne    0x100c70d0
100c70dd:	8b 15 ac 38 22 10    	mov    edx,DWORD PTR ds:0x102238ac
100c70e3:	8b f2                	mov    esi,edx
100c70e5:	39 32                	cmp    DWORD PTR [edx],esi
100c70e7:	74 4a                	je     0x100c7133
100c70e9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c70f0:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100c70f3:	33 c9                	xor    ecx,ecx
100c70f5:	85 c0                	test   eax,eax
100c70f7:	74 14                	je     0x100c710d
100c70f9:	3b d8                	cmp    ebx,eax
100c70fb:	7c 0b                	jl     0x100c7108
100c70fd:	8d 79 01             	lea    edi,[ecx+0x1]
100c7100:	89 85 00 f4 ff ff    	mov    DWORD PTR [ebp-0xc00],eax
100c7106:	eb 05                	jmp    0x100c710d
100c7108:	b9 01 00 00 00       	mov    ecx,0x1
100c710d:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
100c7110:	85 c0                	test   eax,eax
100c7112:	74 0f                	je     0x100c7123
100c7114:	3b d8                	cmp    ebx,eax
100c7116:	7f 0f                	jg     0x100c7127
100c7118:	bf 01 00 00 00       	mov    edi,0x1
100c711d:	89 85 fc f3 ff ff    	mov    DWORD PTR [ebp-0xc04],eax
100c7123:	85 c9                	test   ecx,ecx
100c7125:	74 0e                	je     0x100c7135
100c7127:	8b 36                	mov    esi,DWORD PTR [esi]
100c7129:	8b 06                	mov    eax,DWORD PTR [esi]
100c712b:	3b c2                	cmp    eax,edx
100c712d:	75 c1                	jne    0x100c70f0
100c712f:	85 ff                	test   edi,edi
100c7131:	75 04                	jne    0x100c7137
100c7133:	8b f2                	mov    esi,edx
100c7135:	8b 06                	mov    eax,DWORD PTR [esi]
100c7137:	8d 4e 04             	lea    ecx,[esi+0x4]
100c713a:	a3 ac 38 22 10       	mov    ds:0x102238ac,eax
100c713f:	8d 55 dc             	lea    edx,[ebp-0x24]
100c7142:	2b d1                	sub    edx,ecx
100c7144:	8a 01                	mov    al,BYTE PTR [ecx]
100c7146:	8d 49 01             	lea    ecx,[ecx+0x1]
100c7149:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c714d:	84 c0                	test   al,al
100c714f:	75 f3                	jne    0x100c7144
100c7151:	8d 85 04 f4 ff ff    	lea    eax,[ebp-0xbfc]
100c7157:	83 c6 2c             	add    esi,0x2c
100c715a:	50                   	push   eax
100c715b:	56                   	push   esi
100c715c:	e8 2f 14 00 00       	call   0x100c8590
100c7161:	8d 8d e0 f9 ff ff    	lea    ecx,[ebp-0x620]
100c7167:	83 c4 08             	add    esp,0x8
100c716a:	2b ce                	sub    ecx,esi
100c716c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c7170:	8a 06                	mov    al,BYTE PTR [esi]
100c7172:	8d 76 01             	lea    esi,[esi+0x1]
100c7175:	88 44 31 ff          	mov    BYTE PTR [ecx+esi*1-0x1],al
100c7179:	84 c0                	test   al,al
100c717b:	75 f3                	jne    0x100c7170
100c717d:	8b bd fc f3 ff ff    	mov    edi,DWORD PTR [ebp-0xc04]
100c7183:	8d 45 dc             	lea    eax,[ebp-0x24]
100c7186:	50                   	push   eax
100c7187:	ff 15 00 31 22 10    	call   DWORD PTR ds:0x10223100
100c718d:	83 c4 04             	add    esp,0x4
100c7190:	85 c0                	test   eax,eax
100c7192:	75 1b                	jne    0x100c71af
100c7194:	33 c9                	xor    ecx,ecx
100c7196:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100c719d:	00 00 00 
100c71a0:	8a 44 0d bc          	mov    al,BYTE PTR [ebp+ecx*1-0x44]
100c71a4:	8d 49 01             	lea    ecx,[ecx+0x1]
100c71a7:	88 44 0d db          	mov    BYTE PTR [ebp+ecx*1-0x25],al
100c71ab:	84 c0                	test   al,al
100c71ad:	75 f1                	jne    0x100c71a0
100c71af:	8d 45 dc             	lea    eax,[ebp-0x24]
100c71b2:	c7 05 04 2f 22 10 01 	mov    DWORD PTR ds:0x10222f04,0x1
100c71b9:	00 00 00 
100c71bc:	50                   	push   eax
100c71bd:	68 ac 65 1d 10       	push   0x101d65ac
100c71c2:	6a 01                	push   0x1
100c71c4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c71ca:	8b 85 00 f4 ff ff    	mov    eax,DWORD PTR [ebp-0xc00]
100c71d0:	83 c4 0c             	add    esp,0xc
100c71d3:	85 c0                	test   eax,eax
100c71d5:	75 04                	jne    0x100c71db
100c71d7:	85 ff                	test   edi,edi
100c71d9:	74 13                	je     0x100c71ee
100c71db:	53                   	push   ebx
100c71dc:	57                   	push   edi
100c71dd:	50                   	push   eax
100c71de:	68 c0 65 1d 10       	push   0x101d65c0
100c71e3:	6a 01                	push   0x1
100c71e5:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c71eb:	83 c4 14             	add    esp,0x14
100c71ee:	5f                   	pop    edi
100c71ef:	8d 8d e0 f9 ff ff    	lea    ecx,[ebp-0x620]
100c71f5:	5e                   	pop    esi
100c71f6:	8d 51 01             	lea    edx,[ecx+0x1]
100c71f9:	5b                   	pop    ebx
100c71fa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c7200:	8a 01                	mov    al,BYTE PTR [ecx]
100c7202:	41                   	inc    ecx
100c7203:	84 c0                	test   al,al
100c7205:	75 f9                	jne    0x100c7200
100c7207:	2b ca                	sub    ecx,edx
100c7209:	74 17                	je     0x100c7222
100c720b:	8d 85 e0 f9 ff ff    	lea    eax,[ebp-0x620]
100c7211:	50                   	push   eax
100c7212:	68 ec 65 1d 10       	push   0x101d65ec
100c7217:	6a 01                	push   0x1
100c7219:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c721f:	83 c4 0c             	add    esp,0xc
100c7222:	8d 45 dc             	lea    eax,[ebp-0x24]
100c7225:	6a 00                	push   0x0
100c7227:	50                   	push   eax
100c7228:	ff 15 60 2f 22 10    	call   DWORD PTR ds:0x10222f60
100c722e:	8d 8d 04 f4 ff ff    	lea    ecx,[ebp-0xbfc]
100c7234:	83 c4 08             	add    esp,0x8
100c7237:	8d 51 01             	lea    edx,[ecx+0x1]
100c723a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c7240:	8a 01                	mov    al,BYTE PTR [ecx]
100c7242:	41                   	inc    ecx
100c7243:	84 c0                	test   al,al
100c7245:	75 f9                	jne    0x100c7240
100c7247:	2b ca                	sub    ecx,edx
100c7249:	74 10                	je     0x100c725b
100c724b:	8d 85 04 f4 ff ff    	lea    eax,[ebp-0xbfc]
100c7251:	50                   	push   eax
100c7252:	ff 15 e4 2f 22 10    	call   DWORD PTR ds:0x10222fe4
100c7258:	83 c4 04             	add    esp,0x4
100c725b:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c725e:	33 cd                	xor    ecx,ebp
100c7260:	e8 4e 69 07 00       	call   0x1013dbb3
100c7265:	8b e5                	mov    esp,ebp
100c7267:	5d                   	pop    ebp
100c7268:	c3                   	ret
