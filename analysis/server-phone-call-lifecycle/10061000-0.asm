
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10061000 <.text+0x60000>:
10061000:	56                   	push   esi
10061001:	57                   	push   edi
10061002:	8b f9                	mov    edi,ecx
10061004:	8d 8f e0 00 00 00    	lea    ecx,[edi+0xe0]
1006100a:	e8 71 67 fb ff       	call   0x10017780
1006100f:	85 c0                	test   eax,eax
10061011:	0f 84 f8 01 00 00    	je     0x1006120f
10061017:	8d 8f e0 00 00 00    	lea    ecx,[edi+0xe0]
1006101d:	e8 7e 67 fb ff       	call   0x100177a0
10061022:	8b c8                	mov    ecx,eax
10061024:	8b 10                	mov    edx,DWORD PTR [eax]
10061026:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1006102c:	85 c0                	test   eax,eax
1006102e:	0f 84 db 01 00 00    	je     0x1006120f
10061034:	8d 8f e0 00 00 00    	lea    ecx,[edi+0xe0]
1006103a:	e8 61 67 fb ff       	call   0x100177a0
1006103f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10061042:	50                   	push   eax
10061043:	e8 98 15 fb ff       	call   0x100125e0
10061048:	8b f0                	mov    esi,eax
1006104a:	83 c4 04             	add    esp,0x4
1006104d:	85 f6                	test   esi,esi
1006104f:	0f 84 ba 01 00 00    	je     0x1006120f
10061055:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10061058:	f7 81 a8 01 00 00 00 	test   DWORD PTR [ecx+0x1a8],0x200
1006105f:	02 00 00 
10061062:	0f 84 98 01 00 00    	je     0x10061200
10061068:	68 50 de 1a 10       	push   0x101ade50
1006106d:	8b ce                	mov    ecx,esi
1006106f:	e8 0c 13 08 00       	call   0x100e2380
10061074:	85 c0                	test   eax,eax
10061076:	0f 84 93 01 00 00    	je     0x1006120f
1006107c:	80 bf dc 00 00 00 00 	cmp    BYTE PTR [edi+0xdc],0x0
10061083:	0f 85 8f 00 00 00    	jne    0x10061118
10061089:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1006108c:	6a 64                	push   0x64
1006108e:	6a 00                	push   0x0
10061090:	83 ec 08             	sub    esp,0x8
10061093:	c6 87 dc 00 00 00 01 	mov    BYTE PTR [edi+0xdc],0x1
1006109a:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
100610a1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100610a4:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100610ab:	3f 
100610ac:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100610b3:	74 44                	je     0x100610f9
100610b5:	68 34 29 1b 10       	push   0x101b2934
100610ba:	6a 00                	push   0x0
100610bc:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100610c2:	e8 29 b9 09 00       	call   0x100fc9f0
100610c7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100610ca:	83 c4 18             	add    esp,0x18
100610cd:	83 8e 00 25 00 00 08 	or     DWORD PTR [esi+0x2500],0x8
100610d4:	8b cf                	mov    ecx,edi
100610d6:	c7 86 b4 1e 00 00 01 	mov    DWORD PTR [esi+0x1eb4],0x1
100610dd:	00 00 00 
100610e0:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x40a00000
100610e7:	00 a0 40 
100610ea:	8b 07                	mov    eax,DWORD PTR [edi]
100610ec:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
100610f3:	ff 50 08             	call   DWORD PTR [eax+0x8]
100610f6:	5f                   	pop    edi
100610f7:	5e                   	pop    esi
100610f8:	c3                   	ret
100610f9:	68 4c 29 1b 10       	push   0x101b294c
100610fe:	6a 00                	push   0x0
10061100:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10061106:	e8 e5 b8 09 00       	call   0x100fc9f0
1006110b:	83 c4 1c             	add    esp,0x1c
1006110e:	c7 86 a0 1e 00 00 03 	mov    DWORD PTR [esi+0x1ea0],0x3
10061115:	00 00 00 
10061118:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
1006111e:	85 c0                	test   eax,eax
10061120:	0f 84 da 00 00 00    	je     0x10061200
10061126:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10061129:	ba 50 de 1a 10       	mov    edx,0x101ade50
1006112e:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10061134:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1006113a:	f7 d9                	neg    ecx
1006113c:	1b c9                	sbb    ecx,ecx
1006113e:	23 c8                	and    ecx,eax
10061140:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10061145:	8b 09                	mov    ecx,DWORD PTR [ecx]
10061147:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1006114d:	0f 1f 00             	nop    DWORD PTR [eax]
10061150:	8a 01                	mov    al,BYTE PTR [ecx]
10061152:	3a 02                	cmp    al,BYTE PTR [edx]
10061154:	75 1a                	jne    0x10061170
10061156:	84 c0                	test   al,al
10061158:	74 12                	je     0x1006116c
1006115a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1006115d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10061160:	75 0e                	jne    0x10061170
10061162:	83 c1 02             	add    ecx,0x2
10061165:	83 c2 02             	add    edx,0x2
10061168:	84 c0                	test   al,al
1006116a:	75 e4                	jne    0x10061150
1006116c:	33 c0                	xor    eax,eax
1006116e:	eb 05                	jmp    0x10061175
10061170:	1b c0                	sbb    eax,eax
10061172:	83 c8 01             	or     eax,0x1
10061175:	85 c0                	test   eax,eax
10061177:	0f 85 83 00 00 00    	jne    0x10061200
1006117d:	8b 06                	mov    eax,DWORD PTR [esi]
1006117f:	8b ce                	mov    ecx,esi
10061181:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10061187:	85 c0                	test   eax,eax
10061189:	74 75                	je     0x10061200
1006118b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10061190:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10061194:	0f 2f 86 08 03 00 00 	comiss xmm0,DWORD PTR [esi+0x308]
1006119b:	76 63                	jbe    0x10061200
1006119d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100611a0:	83 8e 00 25 00 00 08 	or     DWORD PTR [esi+0x2500],0x8
100611a7:	c7 86 b4 1e 00 00 01 	mov    DWORD PTR [esi+0x1eb4],0x1
100611ae:	00 00 00 
100611b1:	51                   	push   ecx
100611b2:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x40a00000
100611b9:	00 a0 40 
100611bc:	8b cf                	mov    ecx,edi
100611be:	8b 07                	mov    eax,DWORD PTR [edi]
100611c0:	c7 87 f4 01 00 00 01 	mov    DWORD PTR [edi+0x1f4],0x1
100611c7:	00 00 00 
100611ca:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
100611d1:	ff 50 08             	call   DWORD PTR [eax+0x8]
100611d4:	56                   	push   esi
100611d5:	8d 8f f8 01 00 00    	lea    ecx,[edi+0x1f8]
100611db:	c7 47 78 20 fc 05 10 	mov    DWORD PTR [edi+0x78],0x1005fc20
100611e2:	e8 59 65 fb ff       	call   0x10017740
100611e7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100611ec:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100611f0:	f3 0f 58 05 b8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1eb8
100611f7:	10 
100611f8:	f3 0f 11 86 08 03 00 	movss  DWORD PTR [esi+0x308],xmm0
100611ff:	00 
10061200:	8b 07                	mov    eax,DWORD PTR [edi]
10061202:	51                   	push   ecx
10061203:	8b cf                	mov    ecx,edi
10061205:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1006120c:	ff 50 08             	call   DWORD PTR [eax+0x8]
1006120f:	5f                   	pop    edi
10061210:	5e                   	pop    esi
10061211:	c3                   	ret
