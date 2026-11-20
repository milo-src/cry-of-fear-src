
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10013220 <.text+0x12220>:
10013220:	55                   	push   ebp
10013221:	8b ec                	mov    ebp,esp
10013223:	56                   	push   esi
10013224:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10013227:	57                   	push   edi
10013228:	8b f9                	mov    edi,ecx
1001322a:	85 f6                	test   esi,esi
1001322c:	74 0e                	je     0x1001323c
1001322e:	8b 06                	mov    eax,DWORD PTR [esi]
10013230:	8b ce                	mov    ecx,esi
10013232:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10013238:	85 c0                	test   eax,eax
1001323a:	75 19                	jne    0x10013255
1001323c:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10013241:	51                   	push   ecx
10013242:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10013247:	8b cf                	mov    ecx,edi
10013249:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1001324c:	56                   	push   esi
1001324d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10013250:	e8 3b fe ff ff       	call   0x10013090
10013255:	5f                   	pop    edi
10013256:	5e                   	pop    esi
10013257:	5d                   	pop    ebp
10013258:	c2 10 00             	ret    0x10
