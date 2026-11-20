
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10060ed0 <.text+0x5fed0>:
10060ed0:	55                   	push   ebp
10060ed1:	8b ec                	mov    ebp,esp
10060ed3:	56                   	push   esi
10060ed4:	57                   	push   edi
10060ed5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10060ed8:	8b f1                	mov    esi,ecx
10060eda:	57                   	push   edi
10060edb:	e8 20 71 fb ff       	call   0x10018000
10060ee0:	85 c0                	test   eax,eax
10060ee2:	75 06                	jne    0x10060eea
10060ee4:	5f                   	pop    edi
10060ee5:	5e                   	pop    esi
10060ee6:	5d                   	pop    ebp
10060ee7:	c2 04 00             	ret    0x4
10060eea:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10060eed:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10060ef2:	6a 07                	push   0x7
10060ef4:	68 80 2a 21 10       	push   0x10212a80
10060ef9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
10060eff:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10060f05:	56                   	push   esi
10060f06:	68 3c 5b 1b 10       	push   0x101b5b3c
10060f0b:	85 d2                	test   edx,edx
10060f0d:	74 10                	je     0x10060f1f
10060f0f:	03 c2                	add    eax,edx
10060f11:	8b cf                	mov    ecx,edi
10060f13:	50                   	push   eax
10060f14:	e8 a7 9e 0b 00       	call   0x1011adc0
10060f19:	5f                   	pop    edi
10060f1a:	5e                   	pop    esi
10060f1b:	5d                   	pop    ebp
10060f1c:	c2 04 00             	ret    0x4
10060f1f:	03 01                	add    eax,DWORD PTR [ecx]
10060f21:	8b cf                	mov    ecx,edi
10060f23:	50                   	push   eax
10060f24:	e8 97 9e 0b 00       	call   0x1011adc0
10060f29:	5f                   	pop    edi
10060f2a:	5e                   	pop    esi
10060f2b:	5d                   	pop    ebp
10060f2c:	c2 04 00             	ret    0x4
