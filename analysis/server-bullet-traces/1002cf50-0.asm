
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002cf50 <.text+0x2bf50>:
1002cf50:	55                   	push   ebp
1002cf51:	8b ec                	mov    ebp,esp
1002cf53:	56                   	push   esi
1002cf54:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1002cf57:	b9 a8 ce 1a 10       	mov    ecx,0x101acea8
1002cf5c:	8b c6                	mov    eax,esi
1002cf5e:	66 90                	xchg   ax,ax
1002cf60:	8a 10                	mov    dl,BYTE PTR [eax]
1002cf62:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002cf64:	75 1a                	jne    0x1002cf80
1002cf66:	84 d2                	test   dl,dl
1002cf68:	74 12                	je     0x1002cf7c
1002cf6a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002cf6d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002cf70:	75 0e                	jne    0x1002cf80
1002cf72:	83 c0 02             	add    eax,0x2
1002cf75:	83 c1 02             	add    ecx,0x2
1002cf78:	84 d2                	test   dl,dl
1002cf7a:	75 e4                	jne    0x1002cf60
1002cf7c:	33 c0                	xor    eax,eax
1002cf7e:	eb 05                	jmp    0x1002cf85
1002cf80:	1b c0                	sbb    eax,eax
1002cf82:	83 c8 01             	or     eax,0x1
1002cf85:	85 c0                	test   eax,eax
1002cf87:	75 0a                	jne    0x1002cf93
1002cf89:	b8 02 00 00 00       	mov    eax,0x2
1002cf8e:	5e                   	pop    esi
1002cf8f:	5d                   	pop    ebp
1002cf90:	c2 04 00             	ret    0x4
1002cf93:	b9 b4 ce 1a 10       	mov    ecx,0x101aceb4
1002cf98:	8b c6                	mov    eax,esi
1002cf9a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002cfa0:	8a 10                	mov    dl,BYTE PTR [eax]
1002cfa2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002cfa4:	75 1a                	jne    0x1002cfc0
1002cfa6:	84 d2                	test   dl,dl
1002cfa8:	74 12                	je     0x1002cfbc
1002cfaa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002cfad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002cfb0:	75 0e                	jne    0x1002cfc0
1002cfb2:	83 c0 02             	add    eax,0x2
1002cfb5:	83 c1 02             	add    ecx,0x2
1002cfb8:	84 d2                	test   dl,dl
1002cfba:	75 e4                	jne    0x1002cfa0
1002cfbc:	33 c0                	xor    eax,eax
1002cfbe:	eb 05                	jmp    0x1002cfc5
1002cfc0:	1b c0                	sbb    eax,eax
1002cfc2:	83 c8 01             	or     eax,0x1
1002cfc5:	85 c0                	test   eax,eax
1002cfc7:	75 0a                	jne    0x1002cfd3
1002cfc9:	b8 06 00 00 00       	mov    eax,0x6
1002cfce:	5e                   	pop    esi
1002cfcf:	5d                   	pop    ebp
1002cfd0:	c2 04 00             	ret    0x4
1002cfd3:	b9 c0 ce 1a 10       	mov    ecx,0x101acec0
1002cfd8:	8b c6                	mov    eax,esi
1002cfda:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002cfe0:	8a 10                	mov    dl,BYTE PTR [eax]
1002cfe2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002cfe4:	75 1a                	jne    0x1002d000
1002cfe6:	84 d2                	test   dl,dl
1002cfe8:	74 12                	je     0x1002cffc
1002cfea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002cfed:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002cff0:	75 0e                	jne    0x1002d000
1002cff2:	83 c0 02             	add    eax,0x2
1002cff5:	83 c1 02             	add    ecx,0x2
1002cff8:	84 d2                	test   dl,dl
1002cffa:	75 e4                	jne    0x1002cfe0
1002cffc:	33 c0                	xor    eax,eax
1002cffe:	eb 05                	jmp    0x1002d005
1002d000:	1b c0                	sbb    eax,eax
1002d002:	83 c8 01             	or     eax,0x1
1002d005:	85 c0                	test   eax,eax
1002d007:	75 0a                	jne    0x1002d013
1002d009:	b8 07 00 00 00       	mov    eax,0x7
1002d00e:	5e                   	pop    esi
1002d00f:	5d                   	pop    ebp
1002d010:	c2 04 00             	ret    0x4
1002d013:	b9 cc ce 1a 10       	mov    ecx,0x101acecc
1002d018:	8b c6                	mov    eax,esi
1002d01a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d020:	8a 10                	mov    dl,BYTE PTR [eax]
1002d022:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d024:	75 1a                	jne    0x1002d040
1002d026:	84 d2                	test   dl,dl
1002d028:	74 12                	je     0x1002d03c
1002d02a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d02d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d030:	75 0e                	jne    0x1002d040
1002d032:	83 c0 02             	add    eax,0x2
1002d035:	83 c1 02             	add    ecx,0x2
1002d038:	84 d2                	test   dl,dl
1002d03a:	75 e4                	jne    0x1002d020
1002d03c:	33 c0                	xor    eax,eax
1002d03e:	eb 05                	jmp    0x1002d045
1002d040:	1b c0                	sbb    eax,eax
1002d042:	83 c8 01             	or     eax,0x1
1002d045:	85 c0                	test   eax,eax
1002d047:	75 0a                	jne    0x1002d053
1002d049:	b8 08 00 00 00       	mov    eax,0x8
1002d04e:	5e                   	pop    esi
1002d04f:	5d                   	pop    ebp
1002d050:	c2 04 00             	ret    0x4
1002d053:	b9 d8 ce 1a 10       	mov    ecx,0x101aced8
1002d058:	8b c6                	mov    eax,esi
1002d05a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d060:	8a 10                	mov    dl,BYTE PTR [eax]
1002d062:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d064:	75 1a                	jne    0x1002d080
1002d066:	84 d2                	test   dl,dl
1002d068:	74 12                	je     0x1002d07c
1002d06a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d06d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d070:	75 0e                	jne    0x1002d080
1002d072:	83 c0 02             	add    eax,0x2
1002d075:	83 c1 02             	add    ecx,0x2
1002d078:	84 d2                	test   dl,dl
1002d07a:	75 e4                	jne    0x1002d060
1002d07c:	33 c0                	xor    eax,eax
1002d07e:	eb 05                	jmp    0x1002d085
1002d080:	1b c0                	sbb    eax,eax
1002d082:	83 c8 01             	or     eax,0x1
1002d085:	85 c0                	test   eax,eax
1002d087:	75 0a                	jne    0x1002d093
1002d089:	b8 09 00 00 00       	mov    eax,0x9
1002d08e:	5e                   	pop    esi
1002d08f:	5d                   	pop    ebp
1002d090:	c2 04 00             	ret    0x4
1002d093:	b9 e8 ce 1a 10       	mov    ecx,0x101acee8
1002d098:	8b c6                	mov    eax,esi
1002d09a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d0a0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d0a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d0a4:	75 1a                	jne    0x1002d0c0
1002d0a6:	84 d2                	test   dl,dl
1002d0a8:	74 12                	je     0x1002d0bc
1002d0aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d0ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d0b0:	75 0e                	jne    0x1002d0c0
1002d0b2:	83 c0 02             	add    eax,0x2
1002d0b5:	83 c1 02             	add    ecx,0x2
1002d0b8:	84 d2                	test   dl,dl
1002d0ba:	75 e4                	jne    0x1002d0a0
1002d0bc:	33 c0                	xor    eax,eax
1002d0be:	eb 05                	jmp    0x1002d0c5
1002d0c0:	1b c0                	sbb    eax,eax
1002d0c2:	83 c8 01             	or     eax,0x1
1002d0c5:	85 c0                	test   eax,eax
1002d0c7:	75 0a                	jne    0x1002d0d3
1002d0c9:	b8 0a 00 00 00       	mov    eax,0xa
1002d0ce:	5e                   	pop    esi
1002d0cf:	5d                   	pop    ebp
1002d0d0:	c2 04 00             	ret    0x4
1002d0d3:	b9 f4 ce 1a 10       	mov    ecx,0x101acef4
1002d0d8:	8b c6                	mov    eax,esi
1002d0da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d0e0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d0e2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d0e4:	75 1a                	jne    0x1002d100
1002d0e6:	84 d2                	test   dl,dl
1002d0e8:	74 12                	je     0x1002d0fc
1002d0ea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d0ed:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d0f0:	75 0e                	jne    0x1002d100
1002d0f2:	83 c0 02             	add    eax,0x2
1002d0f5:	83 c1 02             	add    ecx,0x2
1002d0f8:	84 d2                	test   dl,dl
1002d0fa:	75 e4                	jne    0x1002d0e0
1002d0fc:	33 c0                	xor    eax,eax
1002d0fe:	eb 05                	jmp    0x1002d105
1002d100:	1b c0                	sbb    eax,eax
1002d102:	83 c8 01             	or     eax,0x1
1002d105:	85 c0                	test   eax,eax
1002d107:	75 0a                	jne    0x1002d113
1002d109:	b8 0b 00 00 00       	mov    eax,0xb
1002d10e:	5e                   	pop    esi
1002d10f:	5d                   	pop    ebp
1002d110:	c2 04 00             	ret    0x4
1002d113:	b9 00 cf 1a 10       	mov    ecx,0x101acf00
1002d118:	8b c6                	mov    eax,esi
1002d11a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d120:	8a 10                	mov    dl,BYTE PTR [eax]
1002d122:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d124:	75 1a                	jne    0x1002d140
1002d126:	84 d2                	test   dl,dl
1002d128:	74 12                	je     0x1002d13c
1002d12a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d12d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d130:	75 0e                	jne    0x1002d140
1002d132:	83 c0 02             	add    eax,0x2
1002d135:	83 c1 02             	add    ecx,0x2
1002d138:	84 d2                	test   dl,dl
1002d13a:	75 e4                	jne    0x1002d120
1002d13c:	33 c0                	xor    eax,eax
1002d13e:	eb 05                	jmp    0x1002d145
1002d140:	1b c0                	sbb    eax,eax
1002d142:	83 c8 01             	or     eax,0x1
1002d145:	85 c0                	test   eax,eax
1002d147:	75 0a                	jne    0x1002d153
1002d149:	b8 0c 00 00 00       	mov    eax,0xc
1002d14e:	5e                   	pop    esi
1002d14f:	5d                   	pop    ebp
1002d150:	c2 04 00             	ret    0x4
1002d153:	b9 0c cf 1a 10       	mov    ecx,0x101acf0c
1002d158:	8b c6                	mov    eax,esi
1002d15a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d160:	8a 10                	mov    dl,BYTE PTR [eax]
1002d162:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d164:	75 1a                	jne    0x1002d180
1002d166:	84 d2                	test   dl,dl
1002d168:	74 12                	je     0x1002d17c
1002d16a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d16d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d170:	75 0e                	jne    0x1002d180
1002d172:	83 c0 02             	add    eax,0x2
1002d175:	83 c1 02             	add    ecx,0x2
1002d178:	84 d2                	test   dl,dl
1002d17a:	75 e4                	jne    0x1002d160
1002d17c:	33 c0                	xor    eax,eax
1002d17e:	eb 05                	jmp    0x1002d185
1002d180:	1b c0                	sbb    eax,eax
1002d182:	83 c8 01             	or     eax,0x1
1002d185:	85 c0                	test   eax,eax
1002d187:	75 0a                	jne    0x1002d193
1002d189:	b8 0d 00 00 00       	mov    eax,0xd
1002d18e:	5e                   	pop    esi
1002d18f:	5d                   	pop    ebp
1002d190:	c2 04 00             	ret    0x4
1002d193:	b9 18 cf 1a 10       	mov    ecx,0x101acf18
1002d198:	8b c6                	mov    eax,esi
1002d19a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d1a0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d1a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d1a4:	75 1a                	jne    0x1002d1c0
1002d1a6:	84 d2                	test   dl,dl
1002d1a8:	74 12                	je     0x1002d1bc
1002d1aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d1ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d1b0:	75 0e                	jne    0x1002d1c0
1002d1b2:	83 c0 02             	add    eax,0x2
1002d1b5:	83 c1 02             	add    ecx,0x2
1002d1b8:	84 d2                	test   dl,dl
1002d1ba:	75 e4                	jne    0x1002d1a0
1002d1bc:	33 c0                	xor    eax,eax
1002d1be:	eb 05                	jmp    0x1002d1c5
1002d1c0:	1b c0                	sbb    eax,eax
1002d1c2:	83 c8 01             	or     eax,0x1
1002d1c5:	85 c0                	test   eax,eax
1002d1c7:	75 0a                	jne    0x1002d1d3
1002d1c9:	b8 0e 00 00 00       	mov    eax,0xe
1002d1ce:	5e                   	pop    esi
1002d1cf:	5d                   	pop    ebp
1002d1d0:	c2 04 00             	ret    0x4
1002d1d3:	b9 28 cf 1a 10       	mov    ecx,0x101acf28
1002d1d8:	8b c6                	mov    eax,esi
1002d1da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d1e0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d1e2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d1e4:	75 1a                	jne    0x1002d200
1002d1e6:	84 d2                	test   dl,dl
1002d1e8:	74 12                	je     0x1002d1fc
1002d1ea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d1ed:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d1f0:	75 0e                	jne    0x1002d200
1002d1f2:	83 c0 02             	add    eax,0x2
1002d1f5:	83 c1 02             	add    ecx,0x2
1002d1f8:	84 d2                	test   dl,dl
1002d1fa:	75 e4                	jne    0x1002d1e0
1002d1fc:	33 c0                	xor    eax,eax
1002d1fe:	eb 05                	jmp    0x1002d205
1002d200:	1b c0                	sbb    eax,eax
1002d202:	83 c8 01             	or     eax,0x1
1002d205:	85 c0                	test   eax,eax
1002d207:	75 0a                	jne    0x1002d213
1002d209:	b8 11 00 00 00       	mov    eax,0x11
1002d20e:	5e                   	pop    esi
1002d20f:	5d                   	pop    ebp
1002d210:	c2 04 00             	ret    0x4
1002d213:	b9 38 cf 1a 10       	mov    ecx,0x101acf38
1002d218:	8b c6                	mov    eax,esi
1002d21a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d220:	8a 10                	mov    dl,BYTE PTR [eax]
1002d222:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d224:	75 1a                	jne    0x1002d240
1002d226:	84 d2                	test   dl,dl
1002d228:	74 12                	je     0x1002d23c
1002d22a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d22d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d230:	75 0e                	jne    0x1002d240
1002d232:	83 c0 02             	add    eax,0x2
1002d235:	83 c1 02             	add    ecx,0x2
1002d238:	84 d2                	test   dl,dl
1002d23a:	75 e4                	jne    0x1002d220
1002d23c:	33 c0                	xor    eax,eax
1002d23e:	eb 05                	jmp    0x1002d245
1002d240:	1b c0                	sbb    eax,eax
1002d242:	83 c8 01             	or     eax,0x1
1002d245:	85 c0                	test   eax,eax
1002d247:	75 0a                	jne    0x1002d253
1002d249:	b8 12 00 00 00       	mov    eax,0x12
1002d24e:	5e                   	pop    esi
1002d24f:	5d                   	pop    ebp
1002d250:	c2 04 00             	ret    0x4
1002d253:	b9 44 cf 1a 10       	mov    ecx,0x101acf44
1002d258:	8b c6                	mov    eax,esi
1002d25a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d260:	8a 10                	mov    dl,BYTE PTR [eax]
1002d262:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d264:	75 1a                	jne    0x1002d280
1002d266:	84 d2                	test   dl,dl
1002d268:	74 12                	je     0x1002d27c
1002d26a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d26d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d270:	75 0e                	jne    0x1002d280
1002d272:	83 c0 02             	add    eax,0x2
1002d275:	83 c1 02             	add    ecx,0x2
1002d278:	84 d2                	test   dl,dl
1002d27a:	75 e4                	jne    0x1002d260
1002d27c:	33 c0                	xor    eax,eax
1002d27e:	eb 05                	jmp    0x1002d285
1002d280:	1b c0                	sbb    eax,eax
1002d282:	83 c8 01             	or     eax,0x1
1002d285:	85 c0                	test   eax,eax
1002d287:	75 0a                	jne    0x1002d293
1002d289:	b8 13 00 00 00       	mov    eax,0x13
1002d28e:	5e                   	pop    esi
1002d28f:	5d                   	pop    ebp
1002d290:	c2 04 00             	ret    0x4
1002d293:	b9 50 cf 1a 10       	mov    ecx,0x101acf50
1002d298:	8b c6                	mov    eax,esi
1002d29a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d2a0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d2a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d2a4:	75 1a                	jne    0x1002d2c0
1002d2a6:	84 d2                	test   dl,dl
1002d2a8:	74 12                	je     0x1002d2bc
1002d2aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d2ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d2b0:	75 0e                	jne    0x1002d2c0
1002d2b2:	83 c0 02             	add    eax,0x2
1002d2b5:	83 c1 02             	add    ecx,0x2
1002d2b8:	84 d2                	test   dl,dl
1002d2ba:	75 e4                	jne    0x1002d2a0
1002d2bc:	33 c0                	xor    eax,eax
1002d2be:	eb 05                	jmp    0x1002d2c5
1002d2c0:	1b c0                	sbb    eax,eax
1002d2c2:	83 c8 01             	or     eax,0x1
1002d2c5:	85 c0                	test   eax,eax
1002d2c7:	75 0a                	jne    0x1002d2d3
1002d2c9:	b8 14 00 00 00       	mov    eax,0x14
1002d2ce:	5e                   	pop    esi
1002d2cf:	5d                   	pop    ebp
1002d2d0:	c2 04 00             	ret    0x4
1002d2d3:	b9 5c cf 1a 10       	mov    ecx,0x101acf5c
1002d2d8:	8b c6                	mov    eax,esi
1002d2da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d2e0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d2e2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d2e4:	75 1a                	jne    0x1002d300
1002d2e6:	84 d2                	test   dl,dl
1002d2e8:	74 12                	je     0x1002d2fc
1002d2ea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d2ed:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d2f0:	75 0e                	jne    0x1002d300
1002d2f2:	83 c0 02             	add    eax,0x2
1002d2f5:	83 c1 02             	add    ecx,0x2
1002d2f8:	84 d2                	test   dl,dl
1002d2fa:	75 e4                	jne    0x1002d2e0
1002d2fc:	33 c0                	xor    eax,eax
1002d2fe:	eb 05                	jmp    0x1002d305
1002d300:	1b c0                	sbb    eax,eax
1002d302:	83 c8 01             	or     eax,0x1
1002d305:	85 c0                	test   eax,eax
1002d307:	75 0a                	jne    0x1002d313
1002d309:	b8 15 00 00 00       	mov    eax,0x15
1002d30e:	5e                   	pop    esi
1002d30f:	5d                   	pop    ebp
1002d310:	c2 04 00             	ret    0x4
1002d313:	b9 68 cf 1a 10       	mov    ecx,0x101acf68
1002d318:	8b c6                	mov    eax,esi
1002d31a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d320:	8a 10                	mov    dl,BYTE PTR [eax]
1002d322:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d324:	75 1a                	jne    0x1002d340
1002d326:	84 d2                	test   dl,dl
1002d328:	74 12                	je     0x1002d33c
1002d32a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d32d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d330:	75 0e                	jne    0x1002d340
1002d332:	83 c0 02             	add    eax,0x2
1002d335:	83 c1 02             	add    ecx,0x2
1002d338:	84 d2                	test   dl,dl
1002d33a:	75 e4                	jne    0x1002d320
1002d33c:	33 c0                	xor    eax,eax
1002d33e:	eb 05                	jmp    0x1002d345
1002d340:	1b c0                	sbb    eax,eax
1002d342:	83 c8 01             	or     eax,0x1
1002d345:	85 c0                	test   eax,eax
1002d347:	75 0a                	jne    0x1002d353
1002d349:	b8 16 00 00 00       	mov    eax,0x16
1002d34e:	5e                   	pop    esi
1002d34f:	5d                   	pop    ebp
1002d350:	c2 04 00             	ret    0x4
1002d353:	b9 78 cf 1a 10       	mov    ecx,0x101acf78
1002d358:	8b c6                	mov    eax,esi
1002d35a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d360:	8a 10                	mov    dl,BYTE PTR [eax]
1002d362:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d364:	75 1a                	jne    0x1002d380
1002d366:	84 d2                	test   dl,dl
1002d368:	74 12                	je     0x1002d37c
1002d36a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d36d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d370:	75 0e                	jne    0x1002d380
1002d372:	83 c0 02             	add    eax,0x2
1002d375:	83 c1 02             	add    ecx,0x2
1002d378:	84 d2                	test   dl,dl
1002d37a:	75 e4                	jne    0x1002d360
1002d37c:	33 c0                	xor    eax,eax
1002d37e:	eb 05                	jmp    0x1002d385
1002d380:	1b c0                	sbb    eax,eax
1002d382:	83 c8 01             	or     eax,0x1
1002d385:	85 c0                	test   eax,eax
1002d387:	75 0a                	jne    0x1002d393
1002d389:	b8 17 00 00 00       	mov    eax,0x17
1002d38e:	5e                   	pop    esi
1002d38f:	5d                   	pop    ebp
1002d390:	c2 04 00             	ret    0x4
1002d393:	b9 88 cf 1a 10       	mov    ecx,0x101acf88
1002d398:	8b c6                	mov    eax,esi
1002d39a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d3a0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d3a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d3a4:	75 1a                	jne    0x1002d3c0
1002d3a6:	84 d2                	test   dl,dl
1002d3a8:	74 12                	je     0x1002d3bc
1002d3aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d3ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d3b0:	75 0e                	jne    0x1002d3c0
1002d3b2:	83 c0 02             	add    eax,0x2
1002d3b5:	83 c1 02             	add    ecx,0x2
1002d3b8:	84 d2                	test   dl,dl
1002d3ba:	75 e4                	jne    0x1002d3a0
1002d3bc:	33 c0                	xor    eax,eax
1002d3be:	eb 05                	jmp    0x1002d3c5
1002d3c0:	1b c0                	sbb    eax,eax
1002d3c2:	83 c8 01             	or     eax,0x1
1002d3c5:	85 c0                	test   eax,eax
1002d3c7:	75 0a                	jne    0x1002d3d3
1002d3c9:	b8 18 00 00 00       	mov    eax,0x18
1002d3ce:	5e                   	pop    esi
1002d3cf:	5d                   	pop    ebp
1002d3d0:	c2 04 00             	ret    0x4
1002d3d3:	b9 94 cf 1a 10       	mov    ecx,0x101acf94
1002d3d8:	8b c6                	mov    eax,esi
1002d3da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d3e0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d3e2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d3e4:	75 1a                	jne    0x1002d400
1002d3e6:	84 d2                	test   dl,dl
1002d3e8:	74 12                	je     0x1002d3fc
1002d3ea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d3ed:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d3f0:	75 0e                	jne    0x1002d400
1002d3f2:	83 c0 02             	add    eax,0x2
1002d3f5:	83 c1 02             	add    ecx,0x2
1002d3f8:	84 d2                	test   dl,dl
1002d3fa:	75 e4                	jne    0x1002d3e0
1002d3fc:	33 c0                	xor    eax,eax
1002d3fe:	eb 05                	jmp    0x1002d405
1002d400:	1b c0                	sbb    eax,eax
1002d402:	83 c8 01             	or     eax,0x1
1002d405:	85 c0                	test   eax,eax
1002d407:	75 0a                	jne    0x1002d413
1002d409:	b8 19 00 00 00       	mov    eax,0x19
1002d40e:	5e                   	pop    esi
1002d40f:	5d                   	pop    ebp
1002d410:	c2 04 00             	ret    0x4
1002d413:	b9 a0 cf 1a 10       	mov    ecx,0x101acfa0
1002d418:	8b c6                	mov    eax,esi
1002d41a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d420:	8a 10                	mov    dl,BYTE PTR [eax]
1002d422:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d424:	75 1a                	jne    0x1002d440
1002d426:	84 d2                	test   dl,dl
1002d428:	74 12                	je     0x1002d43c
1002d42a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d42d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d430:	75 0e                	jne    0x1002d440
1002d432:	83 c0 02             	add    eax,0x2
1002d435:	83 c1 02             	add    ecx,0x2
1002d438:	84 d2                	test   dl,dl
1002d43a:	75 e4                	jne    0x1002d420
1002d43c:	33 c0                	xor    eax,eax
1002d43e:	eb 05                	jmp    0x1002d445
1002d440:	1b c0                	sbb    eax,eax
1002d442:	83 c8 01             	or     eax,0x1
1002d445:	85 c0                	test   eax,eax
1002d447:	75 0a                	jne    0x1002d453
1002d449:	b8 1a 00 00 00       	mov    eax,0x1a
1002d44e:	5e                   	pop    esi
1002d44f:	5d                   	pop    ebp
1002d450:	c2 04 00             	ret    0x4
1002d453:	b9 ac cf 1a 10       	mov    ecx,0x101acfac
1002d458:	8b c6                	mov    eax,esi
1002d45a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d460:	8a 10                	mov    dl,BYTE PTR [eax]
1002d462:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d464:	75 1a                	jne    0x1002d480
1002d466:	84 d2                	test   dl,dl
1002d468:	74 12                	je     0x1002d47c
1002d46a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d46d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d470:	75 0e                	jne    0x1002d480
1002d472:	83 c0 02             	add    eax,0x2
1002d475:	83 c1 02             	add    ecx,0x2
1002d478:	84 d2                	test   dl,dl
1002d47a:	75 e4                	jne    0x1002d460
1002d47c:	33 c0                	xor    eax,eax
1002d47e:	eb 05                	jmp    0x1002d485
1002d480:	1b c0                	sbb    eax,eax
1002d482:	83 c8 01             	or     eax,0x1
1002d485:	85 c0                	test   eax,eax
1002d487:	75 0a                	jne    0x1002d493
1002d489:	b8 1b 00 00 00       	mov    eax,0x1b
1002d48e:	5e                   	pop    esi
1002d48f:	5d                   	pop    ebp
1002d490:	c2 04 00             	ret    0x4
1002d493:	b9 b8 cf 1a 10       	mov    ecx,0x101acfb8
1002d498:	8b c6                	mov    eax,esi
1002d49a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002d4a0:	8a 10                	mov    dl,BYTE PTR [eax]
1002d4a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002d4a4:	75 1a                	jne    0x1002d4c0
1002d4a6:	84 d2                	test   dl,dl
1002d4a8:	74 12                	je     0x1002d4bc
1002d4aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002d4ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002d4b0:	75 0e                	jne    0x1002d4c0
1002d4b2:	83 c0 02             	add    eax,0x2
1002d4b5:	83 c1 02             	add    ecx,0x2
1002d4b8:	84 d2                	test   dl,dl
1002d4ba:	75 e4                	jne    0x1002d4a0
1002d4bc:	33 c0                	xor    eax,eax
1002d4be:	eb 05                	jmp    0x1002d4c5
1002d4c0:	1b c0                	sbb    eax,eax
1002d4c2:	83 c8 01             	or     eax,0x1
1002d4c5:	85 c0                	test   eax,eax
1002d4c7:	75 0a                	jne    0x1002d4d3
1002d4c9:	b8 20 00 00 00       	mov    eax,0x20
1002d4ce:	5e                   	pop    esi
1002d4cf:	5d                   	pop    ebp
1002d4d0:	c2 04 00             	ret    0x4
1002d4d3:	b8 f0 8b 1a 10       	mov    eax,0x101a8bf0
1002d4d8:	8a 0e                	mov    cl,BYTE PTR [esi]
1002d4da:	3a 08                	cmp    cl,BYTE PTR [eax]
1002d4dc:	75 29                	jne    0x1002d507
1002d4de:	84 c9                	test   cl,cl
1002d4e0:	74 12                	je     0x1002d4f4
1002d4e2:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
1002d4e5:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
1002d4e8:	75 1d                	jne    0x1002d507
1002d4ea:	83 c6 02             	add    esi,0x2
1002d4ed:	83 c0 02             	add    eax,0x2
1002d4f0:	84 c9                	test   cl,cl
1002d4f2:	75 e4                	jne    0x1002d4d8
1002d4f4:	33 c9                	xor    ecx,ecx
1002d4f6:	33 c0                	xor    eax,eax
1002d4f8:	85 c9                	test   ecx,ecx
1002d4fa:	ba 21 00 00 00       	mov    edx,0x21
1002d4ff:	5e                   	pop    esi
1002d500:	0f 44 c2             	cmove  eax,edx
1002d503:	5d                   	pop    ebp
1002d504:	c2 04 00             	ret    0x4
1002d507:	1b c9                	sbb    ecx,ecx
1002d509:	ba 21 00 00 00       	mov    edx,0x21
1002d50e:	83 c9 01             	or     ecx,0x1
1002d511:	33 c0                	xor    eax,eax
1002d513:	85 c9                	test   ecx,ecx
1002d515:	5e                   	pop    esi
1002d516:	0f 44 c2             	cmove  eax,edx
1002d519:	5d                   	pop    ebp
1002d51a:	c2 04 00             	ret    0x4
