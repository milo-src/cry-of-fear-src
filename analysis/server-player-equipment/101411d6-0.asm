
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101411d6 <.text+0x1401d6>:
101411d6:	6a 14                	push   0x14
101411d8:	68 58 7d 20 10       	push   0x10207d58
101411dd:	e8 1e e1 ff ff       	call   0x1013f300
101411e2:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
101411e5:	85 d2                	test   edx,edx
101411e7:	75 12                	jne    0x101411fb
101411e9:	33 c0                	xor    eax,eax
101411eb:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
101411ee:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
101411f5:	59                   	pop    ecx
101411f6:	5f                   	pop    edi
101411f7:	5e                   	pop    esi
101411f8:	5b                   	pop    ebx
101411f9:	c9                   	leave
101411fa:	c3                   	ret
101411fb:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
101411ff:	8b 02                	mov    eax,DWORD PTR [edx]
10141201:	8b 78 fc             	mov    edi,DWORD PTR [eax-0x4]
10141204:	8b f2                	mov    esi,edx
10141206:	2b 77 04             	sub    esi,DWORD PTR [edi+0x4]
10141209:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
1014120c:	8b c2                	mov    eax,edx
1014120e:	2b c1                	sub    eax,ecx
10141210:	f7 d9                	neg    ecx
10141212:	1b c9                	sbb    ecx,ecx
10141214:	23 08                	and    ecx,DWORD PTR [eax]
10141216:	2b f1                	sub    esi,ecx
10141218:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
1014121b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1014121e:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10141221:	a8 01                	test   al,0x1
10141223:	75 0e                	jne    0x10141233
10141225:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10141228:	57                   	push   edi
10141229:	e8 11 fc ff ff       	call   0x10140e3f
1014122e:	83 c4 0c             	add    esp,0xc
10141231:	eb 1e                	jmp    0x10141251
10141233:	2b 55 0c             	sub    edx,DWORD PTR [ebp+0xc]
10141236:	2b d6                	sub    edx,esi
10141238:	52                   	push   edx
10141239:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1014123c:	57                   	push   edi
1014123d:	56                   	push   esi
1014123e:	a8 02                	test   al,0x2
10141240:	75 07                	jne    0x10141249
10141242:	e8 0b fb ff ff       	call   0x10140d52
10141247:	eb 05                	jmp    0x1014124e
10141249:	e8 da fc ff ff       	call   0x10140f28
1014124e:	83 c4 14             	add    esp,0x14
10141251:	85 c0                	test   eax,eax
10141253:	75 0e                	jne    0x10141263
10141255:	39 45 18             	cmp    DWORD PTR [ebp+0x18],eax
10141258:	75 50                	jne    0x101412aa
1014125a:	c7 45 fc fe ff ff ff 	mov    DWORD PTR [ebp-0x4],0xfffffffe
10141261:	eb 86                	jmp    0x101411e9
10141263:	83 c0 08             	add    eax,0x8
10141266:	50                   	push   eax
10141267:	56                   	push   esi
10141268:	e8 2b fe ff ff       	call   0x10141098
1014126d:	59                   	pop    ecx
1014126e:	59                   	pop    ecx
1014126f:	03 c6                	add    eax,esi
10141271:	c7 45 fc fe ff ff ff 	mov    DWORD PTR [ebp-0x4],0xfffffffe
10141278:	e9 6e ff ff ff       	jmp    0x101411eb
