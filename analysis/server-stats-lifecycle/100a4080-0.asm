
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a4080 <.text+0xa3080>:
100a4080:	55                   	push   ebp
100a4081:	8b ec                	mov    ebp,esp
100a4083:	51                   	push   ecx
100a4084:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100a4088:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100a408b:	0f 84 2c 01 00 00    	je     0x100a41bd
100a4091:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a4096:	57                   	push   edi
100a4097:	bf 01 00 00 00       	mov    edi,0x1
100a409c:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100a40a2:	0f 8c 14 01 00 00    	jl     0x100a41bc
100a40a8:	53                   	push   ebx
100a40a9:	56                   	push   esi
100a40aa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100a40b0:	57                   	push   edi
100a40b1:	e8 ca 55 07 00       	call   0x10119680
100a40b6:	8b f0                	mov    esi,eax
100a40b8:	83 c4 04             	add    esp,0x4
100a40bb:	85 f6                	test   esi,esi
100a40bd:	0f 84 e5 00 00 00    	je     0x100a41a8
100a40c3:	68 18 88 1a 10       	push   0x101a8818
100a40c8:	c6 86 78 06 00 00 01 	mov    BYTE PTR [esi+0x678],0x1
100a40cf:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100a40d5:	83 c4 04             	add    esp,0x4
100a40d8:	e8 73 9e 09 00       	call   0x1013df50
100a40dd:	89 86 7c 06 00 00    	mov    DWORD PTR [esi+0x67c],eax
100a40e3:	ba fc 8d 1c 10       	mov    edx,0x101c8dfc
100a40e8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a40ed:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100a40f3:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
100a40f6:	03 c8                	add    ecx,eax
100a40f8:	8b c1                	mov    eax,ecx
100a40fa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100a4100:	8a 18                	mov    bl,BYTE PTR [eax]
100a4102:	3a 1a                	cmp    bl,BYTE PTR [edx]
100a4104:	75 1a                	jne    0x100a4120
100a4106:	84 db                	test   bl,bl
100a4108:	74 12                	je     0x100a411c
100a410a:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100a410d:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
100a4110:	75 0e                	jne    0x100a4120
100a4112:	83 c0 02             	add    eax,0x2
100a4115:	83 c2 02             	add    edx,0x2
100a4118:	84 db                	test   bl,bl
100a411a:	75 e4                	jne    0x100a4100
100a411c:	33 c0                	xor    eax,eax
100a411e:	eb 05                	jmp    0x100a4125
100a4120:	1b c0                	sbb    eax,eax
100a4122:	83 c8 01             	or     eax,0x1
100a4125:	85 c0                	test   eax,eax
100a4127:	74 30                	je     0x100a4159
100a4129:	b8 08 8e 1c 10       	mov    eax,0x101c8e08
100a412e:	66 90                	xchg   ax,ax
100a4130:	8a 11                	mov    dl,BYTE PTR [ecx]
100a4132:	3a 10                	cmp    dl,BYTE PTR [eax]
100a4134:	75 1a                	jne    0x100a4150
100a4136:	84 d2                	test   dl,dl
100a4138:	74 12                	je     0x100a414c
100a413a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100a413d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100a4140:	75 0e                	jne    0x100a4150
100a4142:	83 c1 02             	add    ecx,0x2
100a4145:	83 c0 02             	add    eax,0x2
100a4148:	84 d2                	test   dl,dl
100a414a:	75 e4                	jne    0x100a4130
100a414c:	33 c0                	xor    eax,eax
100a414e:	eb 05                	jmp    0x100a4155
100a4150:	1b c0                	sbb    eax,eax
100a4152:	83 c8 01             	or     eax,0x1
100a4155:	85 c0                	test   eax,eax
100a4157:	75 07                	jne    0x100a4160
100a4159:	c6 86 79 06 00 00 01 	mov    BYTE PTR [esi+0x679],0x1
100a4160:	68 bc 8b 1a 10       	push   0x101a8bbc
100a4165:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100a416b:	83 c4 04             	add    esp,0x4
100a416e:	e8 dd 9d 09 00       	call   0x1013df50
100a4173:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100a4176:	89 86 84 06 00 00    	mov    DWORD PTR [esi+0x684],eax
100a417c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100a417f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100a4182:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100a4189:	74 13                	je     0x100a419e
100a418b:	c6 86 80 06 00 00 01 	mov    BYTE PTR [esi+0x680],0x1
100a4192:	c7 81 68 02 00 00 00 	mov    DWORD PTR [ecx+0x268],0x3f800000
100a4199:	00 80 3f 
100a419c:	eb 0a                	jmp    0x100a41a8
100a419e:	c7 81 68 02 00 00 00 	mov    DWORD PTR [ecx+0x268],0x0
100a41a5:	00 00 00 
100a41a8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a41ad:	47                   	inc    edi
100a41ae:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100a41b4:	0f 8e f6 fe ff ff    	jle    0x100a40b0
100a41ba:	5e                   	pop    esi
100a41bb:	5b                   	pop    ebx
100a41bc:	5f                   	pop    edi
100a41bd:	8b e5                	mov    esp,ebp
100a41bf:	5d                   	pop    ebp
100a41c0:	c2 10 00             	ret    0x10
