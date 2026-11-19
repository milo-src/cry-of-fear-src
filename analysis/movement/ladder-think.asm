
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004ed40 <.text+0x4dd40>:
1004ed40:	55                   	push   ebp
1004ed41:	8b ec                	mov    ebp,esp
1004ed43:	83 ec 0c             	sub    esp,0xc
1004ed46:	56                   	push   esi
1004ed47:	8b f1                	mov    esi,ecx
1004ed49:	80 be 20 01 00 00 00 	cmp    BYTE PTR [esi+0x120],0x0
1004ed50:	74 47                	je     0x1004ed99
1004ed52:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004ed57:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004ed5b:	0f 2f 86 1c 01 00 00 	comiss xmm0,DWORD PTR [esi+0x11c]
1004ed62:	76 35                	jbe    0x1004ed99
1004ed64:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ed6a:	85 c0                	test   eax,eax
1004ed6c:	74 2b                	je     0x1004ed99
1004ed6e:	83 b8 ac 05 00 00 00 	cmp    DWORD PTR [eax+0x5ac],0x0
1004ed75:	74 22                	je     0x1004ed99
1004ed77:	c6 86 20 01 00 00 00 	mov    BYTE PTR [esi+0x120],0x0
1004ed7e:	8b 80 ac 05 00 00    	mov    eax,DWORD PTR [eax+0x5ac]
1004ed84:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004ed87:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004ed8c:	f3 0f 5c 05 bc fe 1a 	subss  xmm0,DWORD PTR ds:0x101afebc
1004ed93:	10 
1004ed94:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1004ed99:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004ed9e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004eda2:	0f 2f 86 e0 00 00 00 	comiss xmm0,DWORD PTR [esi+0xe0]
1004eda9:	0f 86 ee 02 00 00    	jbe    0x1004f09d
1004edaf:	80 be dd 00 00 00 00 	cmp    BYTE PTR [esi+0xdd],0x0
1004edb6:	0f 84 e1 02 00 00    	je     0x1004f09d
1004edbc:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
1004edc2:	85 c9                	test   ecx,ecx
1004edc4:	0f 84 d3 02 00 00    	je     0x1004f09d
1004edca:	6a 01                	push   0x1
1004edcc:	e8 1f 02 09 00       	call   0x100deff0
1004edd1:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004edd7:	8b 88 ac 05 00 00    	mov    ecx,DWORD PTR [eax+0x5ac]
1004eddd:	85 c9                	test   ecx,ecx
1004eddf:	74 32                	je     0x1004ee13
1004ede1:	51                   	push   ecx
1004ede2:	e8 19 ab 0c 00       	call   0x10119900
1004ede7:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004eded:	83 c4 04             	add    esp,0x4
1004edf0:	c7 80 ac 05 00 00 00 	mov    DWORD PTR [eax+0x5ac],0x0
1004edf7:	00 00 00 
1004edfa:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
1004ee00:	6a 00                	push   0x0
1004ee02:	81 c1 88 03 00 00    	add    ecx,0x388
1004ee08:	e8 33 89 fc ff       	call   0x10017740
1004ee0d:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ee13:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004ee16:	57                   	push   edi
1004ee17:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004ee1d:	6a 00                	push   0x0
1004ee1f:	ff 35 4c 66 22 10    	push   DWORD PTR ds:0x1022664c
1004ee25:	6a 01                	push   0x1
1004ee27:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1004ee2d:	6a 00                	push   0x0
1004ee2f:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1004ee35:	6a 00                	push   0x0
1004ee37:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1004ee3d:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1004ee43:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ee49:	68 28 1c 1b 10       	push   0x101b1c28
1004ee4e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004ee51:	83 a0 a8 01 00 00 bf 	and    DWORD PTR [eax+0x1a8],0xffffffbf
1004ee58:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ee5e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004ee61:	81 a0 a8 01 00 00 7f 	and    DWORD PTR [eax+0x1a8],0xffffff7f
1004ee68:	ff ff ff 
1004ee6b:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ee71:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004ee74:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004ee7a:	ff 15 ec 2f 22 10    	call   DWORD PTR ds:0x10222fec
1004ee80:	83 c4 20             	add    esp,0x20
1004ee83:	80 be e4 00 00 00 00 	cmp    BYTE PTR [esi+0xe4],0x0
1004ee8a:	74 24                	je     0x1004eeb0
1004ee8c:	8d be 04 01 00 00    	lea    edi,[esi+0x104]
1004ee92:	8b cf                	mov    ecx,edi
1004ee94:	e8 e7 88 fc ff       	call   0x10017780
1004ee99:	85 c0                	test   eax,eax
1004ee9b:	75 4c                	jne    0x1004eee9
1004ee9d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004eea2:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004eea8:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
1004eeae:	eb 22                	jmp    0x1004eed2
1004eeb0:	8d be fc 00 00 00    	lea    edi,[esi+0xfc]
1004eeb6:	8b cf                	mov    ecx,edi
1004eeb8:	e8 c3 88 fc ff       	call   0x10017780
1004eebd:	85 c0                	test   eax,eax
1004eebf:	75 28                	jne    0x1004eee9
1004eec1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004eec6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004eecc:	03 86 0c 01 00 00    	add    eax,DWORD PTR [esi+0x10c]
1004eed2:	50                   	push   eax
1004eed3:	6a 00                	push   0x0
1004eed5:	e8 b6 96 0c 00       	call   0x10118590
1004eeda:	83 c4 08             	add    esp,0x8
1004eedd:	85 c0                	test   eax,eax
1004eedf:	74 08                	je     0x1004eee9
1004eee1:	50                   	push   eax
1004eee2:	8b cf                	mov    ecx,edi
1004eee4:	e8 57 88 fc ff       	call   0x10017740
1004eee9:	8b cf                	mov    ecx,edi
1004eeeb:	e8 90 88 fc ff       	call   0x10017780
1004eef0:	85 c0                	test   eax,eax
1004eef2:	0f 84 08 01 00 00    	je     0x1004f000
1004eef8:	8b cf                	mov    ecx,edi
1004eefa:	e8 a1 88 fc ff       	call   0x100177a0
1004eeff:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004ef02:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1004ef07:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1004ef0c:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
1004ef11:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1004ef16:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004ef1b:	8d 45 f4             	lea    eax,[ebp-0xc]
1004ef1e:	f3 0f 58 05 30 16 1b 	addss  xmm0,DWORD PTR ds:0x101b1630
1004ef25:	10 
1004ef26:	50                   	push   eax
1004ef27:	ff b6 14 01 00 00    	push   DWORD PTR [esi+0x114]
1004ef2d:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1004ef34:	10 
1004ef35:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1004ef3a:	e8 a1 b0 0c 00       	call   0x10119fe0
1004ef3f:	83 c4 08             	add    esp,0x8
1004ef42:	8b cf                	mov    ecx,edi
1004ef44:	e8 57 88 fc ff       	call   0x100177a0
1004ef49:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1004ef4c:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ef52:	f3 0f 7e 42 50       	movq   xmm0,QWORD PTR [edx+0x50]
1004ef57:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004ef5a:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
1004ef5f:	8b 42 58             	mov    eax,DWORD PTR [edx+0x58]
1004ef62:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
1004ef65:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ef6b:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
1004ef72:	10 
1004ef73:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004ef76:	66 0f d6 41 2c       	movq   QWORD PTR [ecx+0x2c],xmm0
1004ef7b:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
1004ef80:	89 41 34             	mov    DWORD PTR [ecx+0x34],eax
1004ef83:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004ef89:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1004ef8c:	f3 0f 7e 42 2c       	movq   xmm0,QWORD PTR [edx+0x2c]
1004ef91:	66 0f d6 42 20       	movq   QWORD PTR [edx+0x20],xmm0
1004ef96:	8b 42 34             	mov    eax,DWORD PTR [edx+0x34]
1004ef99:	89 42 28             	mov    DWORD PTR [edx+0x28],eax
1004ef9c:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
1004efa2:	8b 01                	mov    eax,DWORD PTR [ecx]
1004efa4:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1004efaa:	85 c0                	test   eax,eax
1004efac:	74 2c                	je     0x1004efda
1004efae:	8b cf                	mov    ecx,edi
1004efb0:	e8 eb 87 fc ff       	call   0x100177a0
1004efb5:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1004efb8:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004efbe:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004efc1:	8b 42 54             	mov    eax,DWORD PTR [edx+0x54]
1004efc4:	89 41 78             	mov    DWORD PTR [ecx+0x78],eax
1004efc7:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004efcd:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004efd0:	c7 80 a0 00 00 00 01 	mov    DWORD PTR [eax+0xa0],0x1
1004efd7:	00 00 00 
1004efda:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004efe0:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004efe3:	81 a0 a8 01 00 00 ff 	and    DWORD PTR [eax+0x1a8],0xfffffdff
1004efea:	fd ff ff 
1004efed:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004eff3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004eff6:	c7 80 a0 00 00 00 01 	mov    DWORD PTR [eax+0xa0],0x1
1004effd:	00 00 00 
1004f000:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004f006:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f009:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004f00f:	6a 00                	push   0x0
1004f011:	ff 35 cc 65 22 10    	push   DWORD PTR ds:0x102265cc
1004f017:	6a 01                	push   0x1
1004f019:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1004f01f:	83 c4 0c             	add    esp,0xc
1004f022:	c7 04 24 00 00 48 42 	mov    DWORD PTR [esp],0x42480000
1004f029:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1004f02f:	6a 00                	push   0x0
1004f031:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1004f037:	6a 00                	push   0x0
1004f039:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1004f03f:	83 c4 0c             	add    esp,0xc
1004f042:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1004f048:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004f04e:	5f                   	pop    edi
1004f04f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f052:	c7 80 74 02 00 00 00 	mov    DWORD PTR [eax+0x274],0x42b40000
1004f059:	00 b4 42 
1004f05c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004f05f:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
1004f065:	85 c9                	test   ecx,ecx
1004f067:	74 28                	je     0x1004f091
1004f069:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
1004f06f:	51                   	push   ecx
1004f070:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1004f077:	6a 03                	push   0x3
1004f079:	50                   	push   eax
1004f07a:	50                   	push   eax
1004f07b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004f080:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004f086:	03 c1                	add    eax,ecx
1004f088:	50                   	push   eax
1004f089:	e8 62 2f 0b 00       	call   0x10101ff0
1004f08e:	83 c4 14             	add    esp,0x14
1004f091:	c6 86 dd 00 00 00 00 	mov    BYTE PTR [esi+0xdd],0x0
1004f098:	5e                   	pop    esi
1004f099:	8b e5                	mov    esp,ebp
1004f09b:	5d                   	pop    ebp
1004f09c:	c3                   	ret
1004f09d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004f0a0:	0f 2f 80 b8 01 00 00 	comiss xmm0,DWORD PTR [eax+0x1b8]
1004f0a7:	76 61                	jbe    0x1004f10a
1004f0a9:	80 be dc 00 00 00 00 	cmp    BYTE PTR [esi+0xdc],0x0
1004f0b0:	75 58                	jne    0x1004f10a
1004f0b2:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
1004f0b8:	85 c9                	test   ecx,ecx
1004f0ba:	74 4e                	je     0x1004f10a
1004f0bc:	8b 81 ac 05 00 00    	mov    eax,DWORD PTR [ecx+0x5ac]
1004f0c2:	85 c0                	test   eax,eax
1004f0c4:	74 20                	je     0x1004f0e6
1004f0c6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f0c9:	f6 80 84 01 00 00 08 	test   BYTE PTR [eax+0x184],0x8
1004f0d0:	74 14                	je     0x1004f0e6
1004f0d2:	8b ce                	mov    ecx,esi
1004f0d4:	c6 86 e4 00 00 00 00 	mov    BYTE PTR [esi+0xe4],0x0
1004f0db:	e8 90 03 00 00       	call   0x1004f470
1004f0e0:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
1004f0e6:	8b 81 ac 05 00 00    	mov    eax,DWORD PTR [ecx+0x5ac]
1004f0ec:	85 c0                	test   eax,eax
1004f0ee:	74 1a                	je     0x1004f10a
1004f0f0:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004f0f3:	f6 80 84 01 00 00 10 	test   BYTE PTR [eax+0x184],0x10
1004f0fa:	74 0e                	je     0x1004f10a
1004f0fc:	8b ce                	mov    ecx,esi
1004f0fe:	c6 86 e4 00 00 00 01 	mov    BYTE PTR [esi+0xe4],0x1
1004f105:	e8 76 06 00 00       	call   0x1004f780
1004f10a:	8b 06                	mov    eax,DWORD PTR [esi]
1004f10c:	51                   	push   ecx
1004f10d:	8b ce                	mov    ecx,esi
1004f10f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1004f116:	ff 50 08             	call   DWORD PTR [eax+0x8]
1004f119:	5e                   	pop    esi
1004f11a:	8b e5                	mov    esp,ebp
1004f11c:	5d                   	pop    ebp
1004f11d:	c3                   	ret
1004f11e:	cc                   	int3
1004f11f:	cc                   	int3
