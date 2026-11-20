
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017110 <.text+0x16110>:
10017110:	55                   	push   ebp
10017111:	8b ec                	mov    ebp,esp
10017113:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10017118:	56                   	push   esi
10017119:	8b f1                	mov    esi,ecx
1001711b:	83 7e 14 00          	cmp    DWORD PTR [esi+0x14],0x0
1001711f:	75 51                	jne    0x10017172
10017121:	83 7e 1c 00          	cmp    DWORD PTR [esi+0x1c],0x0
10017125:	75 4b                	jne    0x10017172
10017127:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001712a:	f6 80 a8 01 00 00 20 	test   BYTE PTR [eax+0x1a8],0x20
10017131:	75 3f                	jne    0x10017172
10017133:	83 b8 08 01 00 00 07 	cmp    DWORD PTR [eax+0x108],0x7
1001713a:	8d 88 00 01 00 00    	lea    ecx,[eax+0x100]
10017140:	74 06                	je     0x10017148
10017142:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10017148:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1001714c:	f3 0f 58 c1          	addss  xmm0,xmm1
10017150:	f3 0f 11 80 04 01 00 	movss  DWORD PTR [eax+0x104],xmm0
10017157:	00 
10017158:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001715b:	f3 0f 10 80 04 01 00 	movss  xmm0,DWORD PTR [eax+0x104]
10017162:	00 
10017163:	f3 0f 11 46 58       	movss  DWORD PTR [esi+0x58],xmm0
10017168:	f3 0f 11 46 5c       	movss  DWORD PTR [esi+0x5c],xmm0
1001716d:	5e                   	pop    esi
1001716e:	5d                   	pop    ebp
1001716f:	c2 08 00             	ret    0x8
10017172:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017175:	83 b8 08 01 00 00 07 	cmp    DWORD PTR [eax+0x108],0x7
1001717c:	75 07                	jne    0x10017185
1001717e:	05 00 01 00 00       	add    eax,0x100
10017183:	eb 05                	jmp    0x1001718a
10017185:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001718a:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001718e:	f3 0f 58 c1          	addss  xmm0,xmm1
10017192:	f3 0f 11 46 58       	movss  DWORD PTR [esi+0x58],xmm0
10017197:	e8 f4 0e 00 00       	call   0x10018090
1001719c:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1001719f:	56                   	push   esi
100171a0:	e8 db d6 0a 00       	call   0x100c4880
100171a5:	83 c4 08             	add    esp,0x8
100171a8:	5e                   	pop    esi
100171a9:	5d                   	pop    ebp
100171aa:	c2 08 00             	ret    0x8
