
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d150 <.text+0x11c150>:
1011d150:	55                   	push   ebp
1011d151:	8b ec                	mov    ebp,esp
1011d153:	83 ec 18             	sub    esp,0x18
1011d156:	56                   	push   esi
1011d157:	8b f1                	mov    esi,ecx
1011d159:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011d15c:	c7 80 08 01 00 00 06 	mov    DWORD PTR [eax+0x108],0x6
1011d163:	00 00 00 
1011d166:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011d169:	c7 80 0c 01 00 00 02 	mov    DWORD PTR [eax+0x10c],0x2
1011d170:	00 00 00 
1011d173:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011d176:	83 c0 08             	add    eax,0x8
1011d179:	50                   	push   eax
1011d17a:	56                   	push   esi
1011d17b:	e8 60 ce ff ff       	call   0x10119fe0
1011d180:	8d 45 f4             	lea    eax,[ebp-0xc]
1011d183:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
1011d18a:	50                   	push   eax
1011d18b:	8d 45 e8             	lea    eax,[ebp-0x18]
1011d18e:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
1011d195:	50                   	push   eax
1011d196:	ff 76 04             	push   DWORD PTR [esi+0x4]
1011d199:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1011d1a0:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
1011d1a7:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
1011d1ae:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
1011d1b5:	e8 76 ce ff ff       	call   0x1011a030
1011d1ba:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1011d1bd:	83 c4 14             	add    esp,0x14
1011d1c0:	c7 86 80 00 00 00 c0 	mov    DWORD PTR [esi+0x80],0x10017ac0
1011d1c7:	7a 01 10 
1011d1ca:	85 c9                	test   ecx,ecx
1011d1cc:	74 0a                	je     0x1011d1d8
1011d1ce:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d1d0:	ff 50 40             	call   DWORD PTR [eax+0x40]
1011d1d3:	83 e0 02             	and    eax,0x2
1011d1d6:	eb 05                	jmp    0x1011d1dd
1011d1d8:	b8 02 00 00 00       	mov    eax,0x2
1011d1dd:	83 c8 08             	or     eax,0x8
1011d1e0:	89 86 08 01 00 00    	mov    DWORD PTR [esi+0x108],eax
1011d1e6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011d1e9:	83 b8 54 02 00 00 01 	cmp    DWORD PTR [eax+0x254],0x1
1011d1f0:	75 07                	jne    0x1011d1f9
1011d1f2:	c7 46 7c d0 c7 11 10 	mov    DWORD PTR [esi+0x7c],0x1011c7d0
1011d1f9:	8b 06                	mov    eax,DWORD PTR [esi]
1011d1fb:	51                   	push   ecx
1011d1fc:	8b ce                	mov    ecx,esi
1011d1fe:	c7 46 78 20 d2 11 10 	mov    DWORD PTR [esi+0x78],0x1011d220
1011d205:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1011d20c:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011d20f:	5e                   	pop    esi
1011d210:	8b e5                	mov    esp,ebp
1011d212:	5d                   	pop    ebp
1011d213:	c3                   	ret
